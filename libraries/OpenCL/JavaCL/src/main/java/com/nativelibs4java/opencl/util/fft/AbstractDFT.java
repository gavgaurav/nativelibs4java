package com.nativelibs4java.opencl.util.fft;

import com.nativelibs4java.opencl.*;
import com.nativelibs4java.util.NIOUtils;
import java.io.IOException;
import java.nio.Buffer;

public abstract class AbstractDFT<B extends Buffer> {

    final CLQueue queue;
    final CLContext context;
    final Class<B> bufferClass;

    public AbstractDFT(CLQueue queue, Class<B> bufferClass) throws IOException, CLBuildException {
        this.queue = queue;
        this.context = queue.getContext();
        this.bufferClass = bufferClass;
    }

    public B dft(B in, boolean inverse) throws CLBuildException {
        int length = in.capacity() / 2;

        CLBuffer<B> inBuf = context.createBuffer(CLMem.Usage.Input, in, true); // true = copy
        CLBuffer<B> outBuf = context.createBuffer(CLMem.Usage.Output, length * 2, bufferClass);

        CLEvent dftEvt = dft(inBuf, outBuf, inverse);
        return outBuf.read(queue, dftEvt);
    }
    protected abstract CLEvent dft(CLBuffer<B> inBuf, CLBuffer<B> outBuf, int length, int sign, int[] dims, CLEvent... events) throws CLBuildException;
    
    public CLEvent dft(CLBuffer<B> inBuf, CLBuffer<B> outBuf, boolean inverse, CLEvent... eventsToWaitFor) throws CLBuildException {
        int length = (int)inBuf.getElementCount() / 2;
        return dft(inBuf, outBuf, length, inverse ? -1 : 1, new int[]{length}, eventsToWaitFor);
    }
	protected Object dftArray(Object complexValues, boolean inverse) throws CLBuildException {
        return NIOUtils.getArray(dft((B)NIOUtils.wrapArray(complexValues), inverse));
    }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

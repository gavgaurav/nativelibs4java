/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package com.nativelibs4java.blas.java;

import com.nativelibs4java.blas.Cholesky;
import com.nativelibs4java.blas.Eigen;
import com.nativelibs4java.blas.LU;
import com.nativelibs4java.blas.Matrix;
import com.nativelibs4java.blas.QR;
import com.nativelibs4java.blas.SVD;
import com.nativelibs4java.blas.Vector;
import com.nativelibs4java.util.NIOUtils;
import java.nio.DoubleBuffer;

/**
 *
 * @author Olivier
 */
public class DefaultMatrix extends DoubleData implements Matrix<DefaultMatrix, DefaultVector, DoubleBuffer> {

	protected final int rows, columns;

    public DefaultMatrix(int rows, int columns) {
		super(rows * columns);
        this.rows = rows;
		this.columns = columns;
    }

	@Override
	public int getColumns() {
		return columns;
	}

	@Override
	public int getRows() {
		return rows;
	}

    public double get(int row, int column) {
        return data.get(row * columns + column);
    }

    public void set(int row, int column, double value) {
        data.put(row * columns + column, value);
    }

	@Override
	public DefaultMatrix multiply(DefaultMatrix other, DefaultMatrix out) {

		if (getColumns() != other.getRows())
			throw new IllegalArgumentException("These two matrices cannot be multiplied (incompatible dimensions)");

		if (out == null)
			out = new DefaultMatrix(getRows(), other.getColumns());
		else if (out.getRows() != getRows() || out.getColumns() != other.getColumns())
			throw new IllegalArgumentException("The output matrix does not have the expected size");

		for (int i = 0; i < getRows(); i++) {
			for (int j = 0; j < other.getColumns(); j++) {
				double sum = 0;
				for (int k = 0; k < getColumns(); k++) {
					sum += get(i, k) * other.get(k, j);
				}
				out.set(i, j, sum);
			}
		}
		return out;
	}

	@Override
	public DefaultVector multiply(DefaultVector v, DefaultVector out) {
		
		if (getColumns() != v.size())
			throw new IllegalArgumentException("This vector cannot be multiplied by this matrix  (incompatible dimensions)");

		if (out == null)
			out = new DefaultVector(getRows());
		else if (out.size() != getRows())
			throw new IllegalArgumentException("The output vector does not have the expected size");

		for (int i = 0, rows = getRows(), columns = getColumns(); i < rows; i++) {
			double sum = 0;
			for (int k = 0; k < columns; k++) {
				sum += get(i, k) * v.get(k);
			}
			out.set(i, sum);
		}
		return out;
		
	}

	@Override
	public SVD<DefaultMatrix, DefaultVector, DoubleBuffer> svd() {
		throw new UnsupportedOperationException("Not supported yet.");
	}

	@Override
	public LU<DefaultMatrix, DefaultVector, DoubleBuffer> lu() {
		throw new UnsupportedOperationException("Not supported yet.");
	}

	@Override
	public Cholesky<DefaultMatrix, DefaultVector, DoubleBuffer> cholesky() {
		throw new UnsupportedOperationException("Not supported yet.");
	}

	@Override
	public Eigen<DefaultMatrix, DefaultVector, DoubleBuffer> eigen() {
		throw new UnsupportedOperationException("Not supported yet.");
	}

	@Override
	public QR<DefaultMatrix, DefaultVector, DoubleBuffer> qr() {
		throw new UnsupportedOperationException("Not supported yet.");
	}
}

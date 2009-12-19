/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package com.nativelibs4java.runtime.ann;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 *
 * @author Olivier Chafik
 */
@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.METHOD, ElementType.TYPE, ElementType.FIELD, ElementType.PACKAGE, ElementType.PARAMETER, ElementType.CONSTRUCTOR})
public @interface CallingConvention {
    public enum Style {
        Auto,
        StdCall,
        ThisCall,
        FastCall,
        CDecl
    }
    Style value() default Style.Auto;
}

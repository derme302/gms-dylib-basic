//
//  dylibBasicDebug.c
//  dylibBasicDebug
//
//  Created by Derme on 16/04/2014.
//  Based on a tutorial by Xojo
//  http://www.realsoftwareblog.com/2011/12/how-to-create-dylib-on-mac-os-x-and.html
//

#include <stdio.h>
#include <string.h>

double addFunction( double a, double b ) {
    return a + b;
}

int stringLength( char *str ) {
    return strlen(str);
}

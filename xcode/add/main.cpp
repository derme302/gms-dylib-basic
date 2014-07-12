//
//  main.cpp
//  add
//
//  Created by Christopher McDermott on 12/07/2014.
//  Copyright (c) 2014 Derme. All rights reserved.
//

#include "main.h"

#if !defined( _MSC_VER)
#define EXPORTED_FN __attribute__((visibility("default")))
#else
#define EXPORTED_FN __declspec(dllexport)
#endif

extern "C" {

EXPORTED_FN double mainLib_addNum(double num1, double num2) {
    return (num1 + num2);
} // end mainLib_addNum

}
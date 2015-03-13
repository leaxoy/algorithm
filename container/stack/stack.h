//
//  stack.h
//  algorithm
//
//  Created by 李晓辉 on 15/3/7.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#ifndef __algorithm__stack__
#define __algorithm__stack__

#include <stdio.h>
#include "list.h"

typedef list stack;

#define stack_init list_init
#define stack_destroy list_destroy

int stack_push(stack*, const void *);
int stack_pop(stack*, void **);

#define stack_peek(stack) ((stack)->head == NULL ? NULL : (stack)->head->data)

#define stack_size list_size

#endif /* defined(__algorithm__stack__) */

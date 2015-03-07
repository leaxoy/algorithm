//
//  stack.c
//  algorithm
//
//  Created by 李晓辉 on 15/3/7.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#include "list.h"
#include "stack.h"

int stack_push(stack * me, const void *data) {
    return list_insert(me, NULL, data);
}

int stack_pop(stack * me, void **data) {
    return list_remove(me, NULL, data);
}
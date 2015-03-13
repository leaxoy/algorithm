//
//  queue.h
//  algorithm
//
//  Created by 李晓辉 on 15/3/7.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#ifndef __algorithm__queue__
#define __algorithm__queue__

#include <stdio.h>
#include "list.h"

typedef list queue;

#define queue_init list_init
#define queue_destroy list_destroy

int queue_in(queue*, const void *);
int queue_out(queue*, void **);

#define queue_peek(queue) ((queue)->head == NULL ? NULL : (queue)->head->data)

#define queue_size list_size

#endif /* defined(__algorithm__queue__) */

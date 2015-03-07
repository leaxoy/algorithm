//
//  queue.c
//  algorithm
//
//  Created by 李晓辉 on 15/3/7.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#include "list.h"
#include "queue.h"

int queue_in(queue* me, const void *data) {
    return list_insert(me, list_tail(me), data);
}

int queue_out(queue *me, void **data) {
    return list_remove(me, NULL, data);
}

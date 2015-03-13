//
//  list.c
//  algorithm
//
//  Created by 李晓辉 on 15/3/6.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#include <stdlib.h>
#include <string.h>
#include "list.h"

void list_init(list *me, void (*destroy)(void *data)) {
    me->size = 0;
    me->destroy = destroy;
    me->head = NULL;
    me->tail = NULL;
    return ;
}

void list_destroy(list *me) {
    void *data;
    while (list_size(me) > 0) {
        if (list_remove(me, NULL, (void **)data)
            == 0 && me->destroy != NULL)
            me->destroy(data);
    }
    memset(me, 0, sizeof(list));
    return ;
}

int list_insert(list *me, list_node *node, const void *data) {
    list_node *one;
    if ((one=(list_node*)malloc(sizeof(list_node))) == NULL)
        return -1;
    
    one->data = (void *)data;
    if (node == NULL) {
        if (list_size(me) == 0)
            me->tail = one;
        one->next = me->head;
        me->head = one;
    }else {
        if (node->next == NULL)
            me->tail = one;
        one->next = node->next;
        node->next = one;
    }
    me->size ++;
    return 0;
}

int list_remove(list *me, list_node *node, void **data) {
    list_node *zero;
    if (list_size(me) == 0)
        return -1;

    if (node == NULL) {
        *data = me->head->data;
        zero = me->head;
        me->head = me->head->next;
        if (list_size(me) == 1)
            me->tail = NULL;
    }else{
        if (node->next == NULL)
            return -1;
        *data = node->next->data;
        zero = node->next;
        node->next = node->next->next;
        if (node->next == NULL)
            me->tail = node;
    }
    free(zero);
    me->size --;
    return 0;
}

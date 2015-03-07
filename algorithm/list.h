//
//  list.h
//  algorithm
//
//  Created by 李晓辉 on 15/3/6.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#ifndef __algorithm__list__
#define __algorithm__list__

#include <stdio.h>

typedef struct list_node_t{
    void *data;
    struct list_node_t *next;
}list_node;

typedef struct list_t{
    int size;
    int (*match)(const void *n1, const void *n2);
    void (*destroy)(void *data);
    list_node *head;
    list_node *tail;
}list;

void list_init(list *, void (*)(void *));
void list_destroy(list *);
int list_insert(list *, list_node *, const void *);
int list_remove(list *, list_node *, void **);


#define list_size(list) ((list)->size)
#define list_head(list) ((list)->head)
#define list_tail(list) ((list)->tail)
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)
#define list_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define list_next(element) ((element)->next)
#define list_data(element) ((element)->data)

#endif /* defined(__algorithm__list__) */

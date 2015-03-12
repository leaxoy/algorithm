//
//  tree.h
//  algorithm
//
//  Created by 李晓辉 on 3/10/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#ifndef __algorithm__tree__
#define __algorithm__tree__

#include <stdio.h>

typedef struct node_t{
    void *key;
    void *val;
    struct node_t *left;
    struct node_t *right;
}node;

typedef struct tree{
    uint size;
    uint height;
}tree_t;

typedef struct tree_itertor{
    uint current;
}tree_itertor_t;

#endif /* defined(__algorithm__tree__) */

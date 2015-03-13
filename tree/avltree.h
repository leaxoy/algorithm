//
//  avltree.h
//  algorithm
//
//  Created by 李晓辉 on 3/10/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#ifndef algorithm_avltree_h
#define algorithm_avltree_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct node_t {
	struct node_t *parent;
	struct node_t *left;
	struct node_t *right;
	void *data;
}node;

typedef struct avltree_t {
	int size;
	struct node *root;
	void *data;
}avltree;

typedef struct tree_iterator {
	int current;
}iterator;

#define left(node) ((node)->left)
#define right(node) ((node)->right)
#define parent(node) ((node)->parent)
#define tree_root(avltree) ((avltree)->root)
#define tree_size(avltree) ((avltree)->size)

void node_init(node *);
void node_destory(node *);

void tree_init(avltree *);
void tree_insert(avltree *, node *);
void tree_remove(avltree *, node *);
void tree_destory(avltree *);
void tree_rotate();

#ifdef __cplusplus
}
#endif

#endif
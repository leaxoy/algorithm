//
//  b64.c
//  algorithm
//
//  Created by 李晓辉 on 3/10/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#include <stdlib.h>

#include "b64.h"

int b64_init(b64_t *b) {
    b->data = NULL;
    b->digest = NULL;
    return 0;
}

int b64_update(b64_t *b, void* data) {
    b->data = data;
    return 0;
}

int b64_encode(b64_t *b) {
    if (b->data == NULL) {
        return -1;
    }
    char *a;
    char *tmp, *cache;
    long len;
    long i, j;
    if ((tmp = (char *)malloc(3)) == NULL) {
        return -1;
    }
    if ((cache = (char *)malloc(4)) == NULL) {
        return -1;
    }

    free(tmp);
    free(cache);
    return 0;
}

int b64_decode(b64_t* b, void *data) {
    return 0;
}
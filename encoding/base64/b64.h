//
//  b64.h
//  algorithm
//
//  Created by 李晓辉 on 3/10/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#ifndef algorithm_b64_h
#define algorithm_b64_h

#include <stdio.h>

static const char _encodeStd[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
static const char _encodeUrl[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";

typedef struct {
    void *data;
    void *digest;
}b64_t;

int b64_init(b64_t*);
int b64_update(b64_t*, void*);
int b64_encode(b64_t*);
int b64_decode(b64_t*, void*);

#endif
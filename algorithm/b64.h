//
//  b64.h
//  algorithm
//
//  Created by 李晓辉 on 3/10/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#ifndef __algorithm__b64__
#define __algorithm__b64__

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

#endif /* defined(__algorithm__b64__) */

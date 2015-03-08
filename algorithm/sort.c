//
//  quicksort.c
//  algorithm
//
//  Created by 李晓辉 on 3/8/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"

int insertSort(void *data, long size, int len, int (*cmp)(const void *e1, const void *e2)) {
    char *a = data;
    void *key;
    int i, j;
    if ((key = (char *)malloc(len)) == NULL) {
        return -1;
    }

    for (j = 1; j < size; j ++) {
        memcpy(key, &a[j * len], len);
        i = j - 1;
        while (i >=0 && cmp(&a[i * len], key) > 0) {
            memcpy(&a[(i + 1) * len], &a[i * len], len);
            i --;
        }
        memcpy(&a[(i + 1) * len], key, len);
    }

    free(key);
    return 0;
}

int quickSort(void *data, long size, int len, int (*cmp)(const void *e1, const void *e2)) {
    return -1;
}

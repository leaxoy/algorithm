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

int insertSort(void *data, long size, int esize, int (*cmp) (const void *e1, const void *e2)) {
    char *a = data;
    void *key;
    int i, j;
    if ((key = (char *)malloc(esize)) == NULL) {
        return -1;
    }

    for (j = 1; j < size; j ++) {
        memcpy(key, &a[j * esize], esize);
        i = j - 1;
        while (i >= 0 && cmp(&a[i * esize], key) > 0) {
            memcpy(&a[(i + 1) * esize], &a[i * esize], esize);
            i --;
        }
        memcpy(&a[(i + 1) * esize], key, esize);
    }

    free(key);
    return 0;
}

static int partition(void *data, long size, int esize, int begin, int end, int(*cmp)(const void *e1, const void *e2)) {
    char *a;
    void *pval, *temp;
    int r[3];
    if ((pval = malloc(esize)) == NULL) {
        return -1;
    }
    if ((temp = malloc(esize)) == NULL) {
        free(pval);
        return -1;
    }
    r[0] = (rand() % (end - begin + 1)) + i;
    r[1] = (rand() % (end - begin + 1)) + i;
    r[2] = (rand() % (end - begin + 1)) + i;
    
}

int quickSort(void *data, long size, int esize, int begin, int end, int(*cmp)(const void *e1, const void *e2)){
    return -1;
}

int mergeSort(void *data, long size, int len, int (*cmp)(const void *e1, const void *e2)) {
    return -1;
}
//
//  main.c
//  algorithm
//
//  Created by 李晓辉 on 15/3/6.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"

int cmp (const void *e1, const void *e2){
    int *a, *b;
    a = (int *)e1;
    b = (int *)e2;
    return *a-*b;
}

int cmp_char (const void *e1, const void *e2){
    char *a, *b;
    a = (char *)e1;
    b = (char *)e2;
    return *a-*b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[50000];
    srand((int)time(0));
    for (int i = 0; i < 50000; i ++) {
        a[i] = rand();
    }
    time_t start = time(NULL);
    insertSort(a, sizeof a / sizeof *a, sizeof * a, *cmp);
    time_t end = time(NULL);
    for (int i = 0; i < sizeof(a) / sizeof(int); i ++) {
        printf("%d\t", a[i]);
    }
    printf("Use %d s long.\n", (int)(end - start));
//    printf("\n");
    char b[] = {'a', '1', 'g','f','s','5','*','\x4e','\x4f', 'k','r','p','j','h',';',','};
    insertSort(b, sizeof b/sizeof *b, sizeof *b, *cmp_char);
    for (int i = 0; i < sizeof b / sizeof *b; i ++) {
//        printf("%c\t", b[i]);
    }
//    printf("\n%ld", sizeof("了的"));
    return 0;
}

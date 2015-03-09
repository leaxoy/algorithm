//
//  main.c
//  algorithm
//
//  Created by 李晓辉 on 15/3/6.
//  Copyright (c) 2015年 李晓辉. All rights reserved.
//

#include <stdio.h>
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
    int a[]= {1,5432,62,5,6,23,6,23,6,26,26,2,7,123,8,9,1,43,423};
    insertSort(a, sizeof a/sizeof *a, sizeof *a, cmp);
    for (int i =0; i<sizeof(a)/sizeof(int); i++) {
//        printf("%d\t", a[i]);
    }
    char b[] = {'a', '1', 'g','f','s','5','*','\x4e','6', 'k','r','p','j','h',';',','};
    insertSort(b, sizeof b/sizeof *b, sizeof *b, cmp_char);
    for (int i =0; i<sizeof b /sizeof *b; i++) {
        printf("%c\t", b[i]);
    }
    printf("\n%ld", sizeof("了的"));
    printf("\n%s\n", "Hello,world");
    return 0;
}

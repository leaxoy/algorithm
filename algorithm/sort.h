//
//  sort.h
//  algorithm
//
//  Created by 李晓辉 on 3/8/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#ifndef algorithm_sort_h
#define algorithm_sort_h


int insertSort(void *, long, int, int (*)(const void *, const void *));

int mergeSort(void *, long, int, int(*)(const void *, const void *));

int quickSort(void *, long, int, int(*)(const void *, const void *));

#endif

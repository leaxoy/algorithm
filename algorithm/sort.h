//
//  sort.h
//  algorithm
//
//  Created by 李晓辉 on 3/8/15.
//  Copyright (c) 2015 李晓辉. All rights reserved.
//

#ifndef algorithm_sort_h
#define algorithm_sort_h


#ifdef __cplusplus
extern "C" {
#endif

/*  
 这是快速排序的算法。
 第一个参数是待排序的数组，
 第二个参数是数组元素的个数，
 第三个参数是数组元素的长度，
 第四个参数是一个比较函数， 比较两个元素的值，并返回约定好的整数，用来进行排序。
 该算法的时间复杂度是 O(n**2);
 */
int insertSort(void *, long, int, int (*)(const void *, const void *));

/*
 这是快速排序的算法。
 第一个参数是待排序的数组，
 第二个参数是数组元素的个数，
 第三个参数是数组元素的长度，
 第四个参数是一个比较函数， 比较两个元素的值，并返回约定好的整数，用来进行排序。
 该算法的时间复杂度是 O(n*lg(n));
 */
int mergeSort(void *, long, int, int(*)(const void *, const void *));

/*
 这是快速排序的算法。
 第一个参数是待排序的数组，
 第二个参数是数组元素的个数，
 第三个参数是数组元素的长度，
 第四个参数是一个比较函数， 比较两个元素的值，并返回约定好的整数，用来进行排序。
 该算法的时间复杂度是 O(n*lg(n));
 */

void swap(const void *, const void *);
int partition(void *, long , long );
int quickSort(void *, long, int, int(*)(const void *, const void *));

/*
 这是快速排序的算法。
 第一个参数是待排序的数组，
 第二个参数是数组元素的个数，
 第三个参数是数组元素的长度，
 第四个参数是一个比较函数， 比较两个元素的值，并返回约定好的整数，用来进行排序。
 该算法的时间复杂度是 O(n + k);
 */
int bucketSort();



#ifdef __cplusplus
}
#endif

#endif

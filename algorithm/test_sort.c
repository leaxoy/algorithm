#include <stdio.h>

#include "./deps/minunit/minunit.h"
#include "sort.h"


static int ints[] = {};
static char chars[] = {};
static int ints_expect_asc[] = {};
static int ints_expect_desc[] = {};

int arrayShouldEqual(const void *a1, const void *a2) {
    if (sizeof a1 / sizeof *a1 != sizeof a2 / sizeof *a2) {
        return -1;
    }
    return 0;
}

int cmp_asc_int (const void *e1, const void *e2) {
    int int1 = *(int *)e1;
    int int2 = *(int *)e2;
    return int1 - int2;
}

int cmp_desc_int (const void *e1, const void *e2) {
    int int1 = *(int *)e1;
    int int2 = *(int *)e2;
    return int2 - int1;
}

MU_TEST(insert_sort_ints) {
    insertSort(ints, sizeof ints / sizeof *ints, sizeof *ints, *cmp_asc_int);
    mu_check(arrayShouldEqual(ints, ints_expect_asc) == 0);
    insertSort(ints, sizeof ints / sizeof *ints, sizeof *ints, *cmp_desc_int);
    mu_check(arrayShouldEqual(ints, ints_expect_desc) == 0);
}

MU_TEST(insert_sort_chars) {

}

MU_TEST(quick_sort_ints) {

}

MU_TEST(quick_sort_chars) {

}


MU_TEST_SUITE(test_sort) {
    MU_RUN_TEST(insert_sort_ints);
}

int main(int argc, char * argv[]) {
    MU_RUN_SUITE(test_sort);
    MU_REPORT();
    return 0;
}


//MU_TEST(test_check) {
//    mu_check(5 == 5);
//}
//MU_TEST_SUITE(test_suite) {
//    MU_RUN_TEST(test_check);
//}
//
//int main(int argc, char *argv[]) {
//    MU_RUN_SUITE(test_suite);
//    MU_REPORT();
//    return 0;
//}


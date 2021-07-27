#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "..\cmocka\include\cmocka.h"

int max4(int a, int b, int c, int d);
int prevmax(int a, int b, int c, int d);

static void test_1(void **state) {
int result = max4(-11,9,3,0);
assert_int_equal(result, 9);
}
static void test_2(void **state) {
int result = max4(-11,9,0,3);
assert_int_equal(result, 9);
}
static void test_3(void **state) {
int result = max4(-11,0,3,9);
assert_int_equal(result, 9);   
}
static void test_4(void **state) {
int result = max4(0,9,3,-11);
assert_int_equal(result, 9);
}
static void test_5(void **state) {
int result = prevmax(-7,19,9,12);
assert_int_equal(result, 12);
}
static void test_6(void **state) {
int result = prevmax(-7,19,12,9);
assert_int_equal(result, 12);
}
static void test_7(void **state) {
int result = prevmax(-7,12,9,19);
assert_int_equal(result, 12);
}
static void test_8(void **state) {
int result = prevmax(12,19,9,-7);
assert_int_equal(result, 12);
}
int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
        cmocka_unit_test( test_2 ),
        cmocka_unit_test( test_3 ),
        cmocka_unit_test( test_4 ),
        cmocka_unit_test( test_5 ),
        cmocka_unit_test( test_6 ),
        cmocka_unit_test( test_7 ),
        cmocka_unit_test( test_8 ),

    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
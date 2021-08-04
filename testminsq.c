#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "..\cmocka\include\cmocka.h"
#include <math.h>

int minsq(int side, int radius);

static void test_1(void **state) {
int result = minsq(4, 5);
assert_int_equal(result, 16);
}
static void test_2(void **state) {
int result = minsq(4, 1);
assert_int_equal(result,  M_PI);
}
static void test_3(void **state) {
int result = minsq(6,5);
assert_int_equal(result, 36);   
}
int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
        cmocka_unit_test( test_2 ),
        cmocka_unit_test( test_3 ),


    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
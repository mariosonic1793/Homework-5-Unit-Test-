#include "unity.h"
#include "calculator.h"

void setUp(void) { }
void tearDown(void) { }

void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3)); // 2 + 3 = 5
}

void test_add_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, add(5, -4)); // 5 + (-4) = 1
}

void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-7, add(-3, -4)); // -3 + (-4) = -7
}

void test_add_zero(void) {
    TEST_ASSERT_EQUAL(10, add(10, 0)); // 10 + 0 = 10
    TEST_ASSERT_EQUAL(0, add(0, 0));   // 0 + 0 = 0
}

void test_add_overflow(void) {
    int result = add(INT_MAX, 1);
    TEST_ASSERT_TRUE(result < 0); // Checks overflow
}

void test_add_underflow(void) {
    int result = add(INT_MIN, -1);
    TEST_ASSERT_TRUE(result > 0); // Checks underflow
}

void test_subtract_positive_numbers(void) {
    TEST_ASSERT_EQUAL(-1, subtract(2, 3)); // 2 - 3 = -1
}

void test_subtract_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(9, subtract(5, -4)); // 5 - (-4) = 9
}

void test_subtract_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, subtract(-3, -4)); // -3 - (-4) = 1
}

void test_subtract_zero(void) {
    TEST_ASSERT_EQUAL(10, subtract(10, 0)); // 10 - 0 = 10
    TEST_ASSERT_EQUAL(0, subtract(0, 0));   // 0 - 0 = 0
}

void test_subtract_overflow(void) {
    int result = subtract(INT_MAX, -1);
    TEST_ASSERT_TRUE(result < 0); // Checks overflow
}

void test_subtract_underflow(void) {
    int result = subtract(INT_MIN, 1);
    TEST_ASSERT_TRUE(result > 0); // Checks underflow
}

void test_multiply_positive_numbers(void) {
    TEST_ASSERT_EQUAL(6, multiply(2, 3)); // 2 * 3 = 6
}

void test_multiply_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-20, multiply(5, -4)); // 5 * (-4) = -20
}

void test_multiply_negative_numbers(void) {
    TEST_ASSERT_EQUAL(12, multiply(-3, -4)); // -3 * (-4) = 12
}

void test_multiply_zero(void) {
    TEST_ASSERT_EQUAL(0, multiply(10, 0)); // 10 * 0 = 0
    TEST_ASSERT_EQUAL(0, multiply(0, 0));   // 0 * 0 = 0
}

void test_multiply_overflow(void) {
    int result = multiply(INT_MAX, 2);
    TEST_ASSERT_TRUE(result < 0); // Checks overflow
}

void test_multiply_underflow(void) {
    int result = multiply(INT_MIN, 2);
    TEST_ASSERT_TRUE(result > 0); // Checks underflow
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    RUN_TEST(test_add_overflow);
    RUN_TEST(test_add_underflow);
    RUN_TEST(test_subtract_positive_numbers);
    RUN_TEST(test_subtract_positive_and_negative_numbers);
    RUN_TEST(test_subtract_negative_numbers);
    RUN_TEST(test_subtract_zero);
    RUN_TEST(test_subtract_overflow);
    RUN_TEST(test_subtract_underflow);
    RUN_TEST(test_multiply_positive_numbers);
    RUN_TEST(test_multiply_positive_and_negative_numbers);
    RUN_TEST(test_multiply_negative_numbers);
    RUN_TEST(test_multiply_zero);
    RUN_TEST(test_multiply_overflow);
    RUN_TEST(test_multiply_underflow);
    return UNITY_END();
}
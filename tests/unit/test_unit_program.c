#include <unity.h>
#include <logic.h>

void test_logic_add(void){
    TEST_ASSERT_EQUAL(5,add(2,3));
    TEST_ASSERT_NOT_EQUAL(4,add(2,3));
}

void test_logic_substract(void){
    TEST_ASSERT_EQUAL(0,substract(3,3));
    TEST_ASSERT_NOT_EQUAL(4,substract(4,3));
}

void test_logic_multiply(void){
    TEST_ASSERT_EQUAL(6,multiply(2,3));
    TEST_ASSERT_NOT_EQUAL(5,multiply(2,3));
}

void test_logic_divide(void){
    TEST_ASSERT_EQUAL(2,divide(10,5));
    TEST_ASSERT_NOT_EQUAL(4,divide(10,5));
}

void setUp(void){

}

void tearDown(void){

}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_substract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
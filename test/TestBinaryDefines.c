#include "unity.h"
#include "BinaryDefines.h"

void test_B_Macro_ConvertsFromBinary(void)
{
  TEST_ASSERT_EQUAL_UINT16(0, B(0));
  TEST_ASSERT_EQUAL_UINT16(1, B(1));
  //width of 1

  TEST_ASSERT_EQUAL_UINT16(0, B(00));
  TEST_ASSERT_EQUAL_UINT16(1, B(01));
  TEST_ASSERT_EQUAL_UINT16(2, B(10));
  TEST_ASSERT_EQUAL_UINT16(3, B(11));
  //width of 2

  // TEST_ASSERT_EQUAL_UINT16(0, B(00000000));
  // TEST_ASSERT_EQUAL_UINT16(15, B(1111));
  // TEST_ASSERT_EQUAL_UINT16(45, B(101101));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_B_Macro_ConvertsFromBinary);
  return UNITY_END();
}

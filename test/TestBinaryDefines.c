#include "unity.h"
#include "BinaryDefines.h"

void test_B_Macro_ConvertsFromBinary(void)
{
  TEST_ASSERT_EQUAL_UINT16(0, B(00000000));
  TEST_ASSERT_EQUAL_UINT16(15, B(1111));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_B_Macro_ConvertsFromBinary);
  return UNITY_END();
}

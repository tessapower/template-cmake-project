#include <gtest/gtest.h>
#include <myLib/myLib.h>

TEST(myLib, add_two_numbers) {
  const int x = 1;
  const int y = 2;

  EXPECT_EQ(add(x, y), 3);
  EXPECT_NE(true, false);
}

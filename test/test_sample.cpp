#include <gtest/gtest.h>
#include "sample.h"

TEST(test_add, should_add_1_and_1_equal_2)
{
    ASSERT_TRUE(2 == add(1,1));
}
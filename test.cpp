#include <gtest/gtest.h>
#include "main.cpp"  // Include your function

TEST(HelloTest, ReturnsCorrectString) {
    EXPECT_EQ(hello(), "Hello, World!");
}

#include <stdio.h>
#include <gtest/gtest.h>
#include "../src/main.h" 

// Test case for 0 and 1
TEST(TestSuite, Power0)
{
    EXPECT_EQ(power(0, 0), 1);
    EXPECT_EQ(power(1, 0), 1);   
    EXPECT_EQ(power(2, 0), 1);   
};

TEST(TestSuite, Power1)
{
    EXPECT_EQ(power(2, 1), 2); 
    EXPECT_EQ(power(5, 1), 5); 
}

TEST(TestSuite, Power2)
{
    EXPECT_EQ(power(2, 2), 4); 
    EXPECT_EQ(power(5, 2), 25); 
}

TEST(TestSuite, Power3)
{
    EXPECT_EQ(power(2, 3), 8); 
    EXPECT_EQ(power(4, 3), 64); 
}

TEST(TestSuite, PowerBig)
{
    EXPECT_EQ(power(3, 4), 81);
    EXPECT_EQ(power(2, 16), 65536); 
}

TEST(TestSuite, NegativePower)
{
    EXPECT_DOUBLE_EQ(power(2, -2), 0.25);
    EXPECT_DOUBLE_EQ(power(5, -3), 0.008);
    EXPECT_DOUBLE_EQ(power(10, -1), 0.1);
}

TEST(TestSuite, NegativeNumber)
{
    EXPECT_DOUBLE_EQ(power(-2, 2), 4);
}

TEST(TestSuite, BothNegative)
{
    EXPECT_DOUBLE_EQ(power(-2, -2), 0.25);
    EXPECT_DOUBLE_EQ(power(-2, -3), -0.125); // (-2)-3 = 1 / (-8)
}
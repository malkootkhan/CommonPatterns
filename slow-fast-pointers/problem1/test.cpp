#include "implementation.hpp"
#include <gtest/gtest.h>

// Test case 1: Happy number
TEST(SolutionTest, TestCase1) {
    int n = 19;  // It is a happy number
    ASSERT_TRUE(solution(n));
}
// Test case 2: Not a happy number
TEST(SolutionTest, TestCase2) {
    int n = 2;  // It is not a happy number
    ASSERT_FALSE(solution(n));
}

// Test case 3: Small happy number
TEST(SolutionTest, TestCase3) {
    int n = 7;  // It is a happy number
    ASSERT_TRUE(solution(n));
}

// Test case 4: Large happy number
TEST(SolutionTest, TestCase4) {
    int n = 100;  // It is a happy number
    ASSERT_TRUE(solution(n));
}

// Test case 5: Edge case - very small number
TEST(SolutionTest, TestCase5) {
    int n = 4123455566;  // It is not a happy number
    ASSERT_FALSE(solution(n));
}

#include "implementation.hpp"


// Google Test cases
TEST(MinSubArrayLen, TestCase1) {
    std::vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    ASSERT_EQ(minSubArrayLen(target, nums), 2); // Expected: 2 (subarray [4, 3])
}


TEST(MinSubArrayLen, TestCase2) {
    std::vector<int> nums = {1, 4, 4};
    int target = 4;
    ASSERT_EQ(minSubArrayLen(target, nums), 2); // Expected: 1 (subarray [4])
}

TEST(MinSubArrayLen, TestCase3) {
    std::vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1};
    int target = 11;
    ASSERT_EQ(minSubArrayLen(target, nums), 0); // Expected: 0 (no subarray meets the target)
}
TEST(MinSubArrayLen, TestCase4) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 15;
    ASSERT_EQ(minSubArrayLen(target, nums), 5); // Expected: 5 (whole array [1, 2, 3, 4, 5])
}

TEST(MinSubArrayLen, TestCase5) {
    std::vector<int> nums = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};
    int target = 15;
    ASSERT_EQ(minSubArrayLen(target, nums), 2); // Expected: 2 (subarray [10, 7])
}


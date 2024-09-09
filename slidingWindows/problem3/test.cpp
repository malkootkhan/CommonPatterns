#include "implementation.hpp"

// Test case using Google Test framework
TEST(SolutionTest, TestCase1) {
    std::string test_str = "AAAAACCCCCAAAAACCCCCC";
    int subStrLen = 8;
    std::set<std::string> retSet = solution(test_str, subStrLen);

    ASSERT_TRUE(retSet.find("AAACCCCC") != retSet.end());
}

// Test case using Google Test framework
TEST(SolutionTest, TestCase2) {
    std::string test_str = "AAAAACCCCCAAAAACCCCCC";
    int subStrLen = 8;
    std::set<std::string> retSet = solution(test_str, subStrLen);
    
    ASSERT_TRUE(retSet.find("AAAACCCC") != retSet.end());
}
// Test case using Google Test framework
TEST(SolutionTest, TestCase3) {
    std::string test_str = "AAAAACCCCCAAAAACCCCCC";
    int subStrLen = 8;
    std::set<std::string> retSet = solution(test_str, subStrLen);

    ASSERT_TRUE(retSet.find("AAAAACCC") != retSet.end());
}

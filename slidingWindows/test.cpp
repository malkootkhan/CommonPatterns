#include "maxLenSubstring.hpp"


// Test cases using Google Test
TEST(MaxLenSubstring, TestCase_1) {
    std::vector<char> test1 = {'a', 'b', 'c', 'd', 'b', 'e', 'a'};
    ASSERT_EQ(maxLenSubstring(test1), 5); // Expected output: 4 ("abcd")
}
TEST(MaxLenSubstring, TestCase_2) {
    std::vector<char> test2 = {'a', 'a', 'a', 'a'};
    ASSERT_EQ(maxLenSubstring(test2), 1); // Expected output: 1 ("a")
}


TEST(MaxLenSubstring, TestCase_3) {
    std::vector<char> test3 = {'a', 'b', 'a', 'b', 'c', 'b'};
    ASSERT_EQ(maxLenSubstring(test3), 3); // Expected output: 3 ("abc")
}

TEST(MaxLenSubstring, TestCase_4) {
    std::vector<char> test4 = {};
    ASSERT_EQ(maxLenSubstring(test4), 0); // Expected output: 0 (empty)
}

TEST(MaxLenSubstring, TestCase_5) {
    std::vector<char> test5 = {'p', 'w', 'w', 'k', 'e', 'w'};
    ASSERT_EQ(maxLenSubstring(test5), 3); // Expected output: 3 ("wke")
}



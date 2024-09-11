#include "implementation.hpp"
#include <gtest/gtest.h>

// Test case 1: Even number of elements
TEST(SolutionTest, EvenNumberOfElements) {
    Linkedlist list;
    for (int i = 1; i <= 10; i++)
        list.insert(i * 10);
    ASSERT_EQ(list.getMiddleEle(), 50);
}

// Test case 2: Odd number of elements
TEST(SolutionTest, OddNumberOfElements) {
    Linkedlist list;
    for (int i = 1; i <= 9; i++)
        list.insert(i * 10);
    ASSERT_EQ(list.getMiddleEle(), 50);
}

// Test case 3: Single element in the list
TEST(SolutionTest, SingleElement) {
    Linkedlist list;
    list.insert(20);
    ASSERT_EQ(list.getMiddleEle(), 20);
}

// Test case 4: Two elements in the list
TEST(SolutionTest, TwoElements) {
    Linkedlist list;
    list.insert(10);
    list.insert(20);
    ASSERT_EQ(list.getMiddleEle(), 10);
}

// Test case 5: Empty list
TEST(SolutionTest, EmptyList) {
    Linkedlist list;
    ASSERT_EQ(list.getMiddleEle(), 0); // Adjust based on your handling of empty cases
}


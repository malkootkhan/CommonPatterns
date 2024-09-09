#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <gtest/gtest.h>
#include <climits>

// Function to process DNA sequences and return unique strings
std::set<std::string> solution(std::string dna, int k) {
    // Temporary vector to store substrings
    std::set<std::string> temp;  // Set to store unique substrings
    std::set<std::string> tmp;
    // Check for valid DNA length
    if (dna.length() > 1000 || dna.length() < 1) {
        return temp;  // Return an empty set if input is invalid
    }

    // Loop through the DNA string
    for (int i = 0; i <= dna.length() - k; i++) {
        std::string str = dna.substr(i, k);  // Extract substring of length k
        auto result = temp.insert(str); // Insert substring into set, check if it was inserted
        
        // If substring already exists, take action
        if (!result.second) {
            tmp.insert(*result.first);
        }
    }

    return tmp;  
}


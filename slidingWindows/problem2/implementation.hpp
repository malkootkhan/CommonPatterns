#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <gtest/gtest.h>
#include <climits>

 /*return the length of subarray whose elements sum is equal or greater than target*/
int getSum(std::vector<int>& temp, int s, int e)
{
    int sum = 0;
    for(int i = s; i <= e; i++ ){
        sum += temp[i];

    }
    return sum;
}

int minSubArrayLen(int target, std::vector<int>& arr)
{


    if(arr.empty())
        return 0;
    if(arr.size() == 1 ) {
        if(arr[0] >= target)
            return 1;
        else 
            return 0;
    }


    int len = arr.size();

    int right;
    int minLen = INT_MAX;


    for(int i = 0; i < len; i++)
    {
        right = 1 + i;
        for(int j = 0; j < len; j++)
        {

            if(right >= len)
                break;
            if(getSum(arr, j, right) >= target)
            {

                if(minLen > (right - j + 1) )
                    minLen = right - j + 1;
            }
            right++;
            
        }
    }
    if(minLen == INT_MAX)
        return 0;
    return minLen;
}

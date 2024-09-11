#include <iostream>
#include <cmath>
#include <unordered_set>

int getHappyNo(int n)
{
    
     int sum = 0;
    while(n != 0)
    {
        sum += std::pow((n%10),2);
        n = n/10;
    }

    return sum;

}

bool solution(int n)
{
    
    std::unordered_set<int> mySet;      /*ordered_set maintain no order, data is not sorted, efficient using hash , time O(1)*/
    /*unoredered_set is used mainly for the cycle detection */

    
        int slowPtr = n;
        int fastPtr = getHappyNo(n);
        while(fastPtr != 1 && fastPtr != slowPtr)
        {
            slowPtr = getHappyNo(slowPtr);
            fastPtr = getHappyNo(getHappyNo(fastPtr));
        }
        if(fastPtr == 1 || slowPtr == 1) 
           return true;
        
       if(slowPtr == fastPtr) 
           /*cycle detected: the value repeated itself, which means reach to the first number again*/
           return false;
       return false;
}

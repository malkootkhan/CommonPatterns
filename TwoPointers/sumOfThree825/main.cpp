#include <iostream>

using namespace std;


int getSum(int first, int sec, int third)
{
    return(first + sec + third);
}

int main()
{
    /*the array must be sorted array to apply the two pointers pattern*/
    int arr[] = {1,2,3,4,5,7,8};
    int fixed = 0;
    int left = 1;
    int len = (sizeof(arr)/4) ;
    int right = len - 1;

    while(fixed < len)
    {
        if(getSum(arr[fixed], arr[left], arr[right]) > 20)
            right--;
        else if(getSum(arr[fixed], arr[left], arr[right]) < 20)
            left++;
        else
        {
            cout<<arr[fixed]<<" + "<<arr[left]<<" + "<<arr[right]<<" = "<<arr[fixed]+arr[left]+arr[right]<<endl;
            return 0;
        }
        if(left >= right)
        {
            fixed++;
            left = fixed + 1;
            right = len - 1;
        }
    }
    return 0;
}

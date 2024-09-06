#include <iostream>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}


int main(int argc, char *argv[])
{
  
  int arr[] = {0,2,0,3,5,0,7,0,13};

  int len = sizeof(arr)/4 ;

  int left = 0;
  int right = len - 1;

  for(auto& tmp:arr)
    std::cout<<tmp<<" ";

  std::cout<<std::endl;

  while(left < right)
  {

    if(arr[left] == 0 )
    {
      swap(&arr[left], &arr[right]);

    }

    left++;
    right--;
  }

  for(auto& tmp:arr)
    std::cout<<tmp<<" ";

  std::cout<<std::endl;

  return 0;
}

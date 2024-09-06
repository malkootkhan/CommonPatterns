#include <iostream>

void swap(int *a, int *b)
{
  int temp = *a;
   *a = *b;
   *b = temp;
}



int main(int argc, char *argv[])
{
  int arr[] = {1,2,3,4,5,6};

  int arr_len = sizeof(arr)/4;

  int i = 0;
  int j = arr_len - 1;

  std::cout<<"Original array"<<std::endl;
  for(auto& tmp:arr)
    std::cout<<tmp<<" ";

  std::cout<<std::endl;

  while(i < j)
  {
    swap(&arr[i], &arr[j]);
    i++;
    j--;
  }

  std::cout<<"after reversing"<<std::endl;
  for (auto& tmp:arr)
    std::cout<<tmp<<" ";

  std::cout<<std::endl;

  return 0;
}

#include <iostream>

int main(int argc, char *argv[])
{
  
  int arr[] = {2,3,5,7,11,13};

  int len = sizeof(arr)/4 ;

  int i = 0;
  int j = len - 1;

  for(auto& tmp:arr)
    std::cout<<tmp<<" ";

  std::cout<<std::endl;

  while(i < j)
  {
    if(arr[i] + arr[j] == 14)
    {
      std::cout<<arr[i]<<" + "<<arr[j]<<" = "<<" 14 "<<std::endl;
      return 0;
    }
    i++;
    j--;
  }

  return 0;
}

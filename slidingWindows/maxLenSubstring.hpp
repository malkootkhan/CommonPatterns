#include <iostream>
#include <vector>
#include <iterator>
#include <gtest/gtest.h>

bool checkRep(std::vector<char>& temp, char ch)
{
  for(int i = 0; i < temp.size(); i++)
  {
    if(temp[i] == ch)
      return true;
  }
  return false;
}

int maxLenSubstring(std::vector<char>& v)
{


  if(v.empty())
      return 0;

  /*slifingWindows approach is recommended*/
  int max_len = 0;

  int left = 0;
  int right = 1;
  std::vector<char> tmp;
  tmp.push_back(v[0]);
  while(right < v.size()){
      if(!checkRep(tmp, v[right]))
      {
          tmp.push_back(v[right]);
      }
      else
      {

          tmp.erase(tmp.begin());
          continue;
      }
      
      right++;
      if(max_len < tmp.size() )
          max_len = tmp.size();

  }

  return max_len; 
}



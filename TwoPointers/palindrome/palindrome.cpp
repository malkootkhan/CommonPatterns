#include <iostream>

int main(int argc, char *argv[])
{
  /*palindrome is a word, phrase or number that can be read the same from opposite side*/
  /*example of palindrome => "madam"*/

  if(argc != 2){
    std::cout<<"incorrect arguments: <file-name> <arg-string>"<<std::endl;
      return 0;
  }

  std::string palindrome = argv[1];

  /*writing a program to confirm if it is palindrome*/
  /*efficient way is to maintain two pointers*/

  int i=0;
  int j= (palindrome.length() - 1);

  while(i < j)
  {
    if(palindrome[i] != palindrome[j]){
      std::cout<<palindrome<<" is not a palindrome"<<std::endl;  
      return 0;
    }
    i++; j--;
  }
  std::cout<<palindrome<<" is a palindrome"<<std::endl;

  return 0;
}

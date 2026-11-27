#include <iostream>
#include <vector>

int main() {
  
  std::vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
  int s=0;
  int o=1;
  for(int i=0;i<num.size();i++)
  {
    if(num[i]%2==0)
    {
      s +=num[i];
    }
    else
    {
      o *=num[i];
    }
  }
  std::cout<<"The sum of even numbers: \n"<<s;
  std::cout<<"The product of odd numbers :"<<o;
}
#include <iostream>

int main() {
  int temp;
  std::cout<<"enter the temp in F:";
  std::cin>>temp;
  if(temp>=100){
    std::cout<<"you have a fever. 🤒\n";
  }
  else
  {
    std::cout<<"you don't have a fever. 🕺\n";
  }
}

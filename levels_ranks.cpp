#include <iostream>

int main() {
  int level=21;
  if(level>=21){
    std::cout<<"diamond";
  }
  else if(level>=16)
  {
    std::cout<<"platinum";
  }
  else if(level>=11)
  {
    std::cout<<"gold";
  }
  else if(level>=6)
  {
    std::cout<<"silver";
  }
  else
  {
    std::cout<<"bronze";
  }
}

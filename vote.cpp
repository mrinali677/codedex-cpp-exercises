#include <iostream>

int main() {
  // Write code here 💖
  int age;
  bool citizen=true;
  bool registered=false;
  std::cout<<"enter age:";
  std::cin>>age;
  if (age>=18 && citizen==true && registered==true)
  {
    std::cout<<"you can vote";
  }
  else if(age<18){
    std::cout<<"you are not old enough to vote";

  }
  else if(citizen==false)
  {
    std::cout<<"you are not eligible to vote";
  }
  else if(registered==false)
  {
    std::cout<<"you need to register";
  }
  else
  {
    std::cout<<"you have not met the requirements";
  }

}

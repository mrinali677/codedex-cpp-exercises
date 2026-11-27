#include <iostream>
void ooo_message(int date)
{
  std::cout<<"Thank you for your email. \nI am currently out of the office and will be back "<<date<<"\nI will respond as soon as I can upon my return.";
}

int main() {
  ooo_message(10);
  
}
#include <iostream>

int main() {
  int number=64;
  int guess;
  std::cout<<"guess the number:\n";
  std::cin>>guess;
  while(guess!=64)
  {
    std::cout<<"guess the number:\n";
    std::cin>>guess;
  }
  if(guess==64)
  {
    std::cout<<"you guessed it ryt!";
  }
}
#include <iostream>

int main() {
  int year;

  std::cout << "Input Year\n";
  std::cin >> year;

  if (year%4 == 0){
    if (year%100 == 0){
      if (year%400 == 0){
        std::cout << "Leap year\n"; 
      }
      else {
        std::cout << "Not a leap year\n";
      }
    }
     else {
     std::cout << "Leap year\n";
   }  
  }
   else {
     std::cout << "Not a leap year\n";
   }   
}
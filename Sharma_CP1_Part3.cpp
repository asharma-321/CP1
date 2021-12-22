//A.Sharma
//CP1 Problem #3
//sharma.aayus@northeastern.edu
//October 26, 2021
#include <iostream> 
int main () { 
  double X_UserInput, Y_UserInput;        
  std::cout<< "Enter X: ";
  std::cin >> X_UserInput;                
  std::cout<< "Enter Y: ";  
  std::cin >> Y_UserInput;                
  double Z_Answer = X_UserInput/Y_UserInput;            
  std::cout<< "X/Y= " << Z_Answer << std::endl; 
  std::cout<< "End of program.";
  return 0;  
} 
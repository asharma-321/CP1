//A.Sharma
//CP1 Problem #2
//sharma.aayus@northeastern.edu
//October 26, 2021
#include <iostream>
#include <cmath> //needed for power
using namespace std;
int main() {
  int i; //define variables as doubles
  double X = 2; //the Power's base 2
  for (i=0;i<9;i++){
     double Y = i;
    double powerTwo = pow(X,Y); //power function pow()
   // printf("%c\n", arr[i]); //print array 
    cout<< i << "\t\t" << powerTwo << endl;
  }
}  

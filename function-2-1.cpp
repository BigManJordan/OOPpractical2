//
//  function-2-1.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void print_binary_str(string decimal_number){
  
  int number = stoi(decimal_number);
  int remainder;
  int quotient;
  string binary = "";
  
  quotient = floor(number/2);
  remainder = number%2;
  number = quotient;
  binary = binary + to_string(remainder);
  
  while (quotient!=0){
    quotient = floor(number/2);
    remainder = number%2;
    number = quotient;
    binary = binary + to_string(remainder);
  }
  
  for (int i=binary.length(); i>-1; i=i-1){
    cout << binary[i];
  }
  cout << endl;
}

//
//  main-2-2.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <iostream>
extern int binary_to_int(int binary_digits[], int number_of_digits);
using namespace std;

int main(void){
  
  int array[2] = {1,0};
  
  int number = binary_to_int(array, 2);
  cout << number;
}

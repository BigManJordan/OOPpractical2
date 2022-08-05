//
//  main-1-4.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
extern void print_scaled(int array[3][3], int scale);

int main(void){
  
  //initialising array
  int array[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  
  //calling function
  print_scaled(array,3);
}

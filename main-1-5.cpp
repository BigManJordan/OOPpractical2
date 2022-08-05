//
//  main-1-5.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
extern void print_summed(int array1[3][3], int array2[3][3]);

int main(void){
  
  //initialising arrays
  int array1[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  
  int array2[3][3] = {
    {1,1,1},
    {1,1,1},
    {1,1,1}
  };
  
  //calling function
  print_summed(array1, array2);
}

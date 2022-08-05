//
//  main-1-3.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
extern void count_digits(int array[4][4]);
int main(void){
  
  //initialising array
  int array[4][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,0,1,2},
    {3,4,5,6},
  };
  
  //printing digit counts
  count_digits(array);
  
}

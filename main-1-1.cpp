//
//  main-1-1.cpp
//  week2practical
//
//  Created by Jordan Le on 4/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(void) {
  
  //initialising array
  int array[4][4] = {{5,2,3,4}, {1,5,3,4}, {1,2,5,4}, {1,2,3,5}};
  
  //calling function
  int sum = sum_diagonal(array);
  
  //printing result
  cout << "sum = " << sum << endl;
}

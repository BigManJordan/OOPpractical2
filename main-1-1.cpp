//
//  main-1-1.cpp
//  week2practical
//
//  Created by Jordan Le on 4/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "function-1-1.cpp"

int main(void) {
  
  int array[4][4] = {{5,2,3,4}, {1,5,3,4}, {1,2,5,4}, {1,2,3,5}};
  
  int sum = sum_diagonal(array);
  printf("sum = %d\n", sum);
}

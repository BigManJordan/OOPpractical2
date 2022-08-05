//
//  function-x-x.cpp
//  week2practical
//
//  Created by Jordan Le on 4/8/2022.
//

#include <stdio.h>

int sum_diagonal(int array[4][4]){
  
  //initialising int sum
  int sum = 0;
  
  //summing diagonal numbers
  for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
      if (i==j){
        sum = sum + array[i][j];
      }
    }
  }
  
  return sum;
}

//
//  main-1-2.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "function-1-2.cpp"

int main(void){
  
  //initialising array
  int array[10][10] = {
    {1,0,0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,1},
  };
  
  //calling function
  int identity = is_identity(array);
  
  //printing result
  printf("identity = %d\n", identity);
}

//
//  function-1-2.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>

int is_identity(int array[10][10]){
  
  //initialising identity int
  int identity = 1;
  
  //checking if array is an identity matrix
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      if (i==j && array[i][j]!=1){
        return identity = 0;
      } else if (i!=j && array[i][j]!=0){
        return identity = 0;
      }
    }
  }
  
  return identity;
}

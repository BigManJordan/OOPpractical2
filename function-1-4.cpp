//
//  function-1-4.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void print_scaled(int array[3][3], int scale){
  
  //multiplying each element
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      array[i][j] = array[i][j] * scale;
      
      //printing results
      cout << array[i][j];
      if (j!=2) {
        cout << " ";
      }
    }
    
    //creating new line
    cout << endl;
  }
}

//
//  function-1-3.cpp
//  week2practical
//
//  Created by Jordan Le on 5/8/2022.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void count_digits(int array[4][4]){
  
  //initialising ints for counts
  int zeros = 0;
  int ones = 0;
  int twos = 0;
  int threes = 0;
  int fours = 0;
  int fives = 0;
  int sixes = 0;
  int sevens = 0;
  int eights = 0;
  int nines = 0;
  
  //counting numbers
  for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
      if (array[i][j] == 0){
        zeros = zeros + 1;
      }
      if (array[i][j] == 1){
        ones = ones + 1;
      }
      if (array[i][j] == 2){
        twos = twos + 1;
      }
      if (array[i][j] == 3){
        threes = threes + 1;
      }
      if (array[i][j] == 4){
        fours = fours + 1;
      }
      if (array[i][j] == 5){
        fives = fives + 1;
      }
      if (array[i][j] == 6){
        sixes = sixes + 1;
      }
      if (array[i][j] == 7){
        sevens = sevens + 1;
      }
      if (array[i][j] == 8){
        eights = eights + 1;
      }
      if (array[i][j] == 9){
        nines = nines + 1;
      }
    }
  }
  
  //printing results
  cout << "0:" << zeros << ";";
  cout << "1:" << ones << ";";
  cout << "2:" << twos << ";";
  cout << "3:" << threes << ";";
  cout << "4:" << fours << ";";
  cout << "5:" << fives << ";";
  cout << "6:" << sixes << ";";
  cout << "7:" << sevens << ";";
  cout << "8:" << eights << ";";
  cout << "9:" << nines << ";" << endl;
}

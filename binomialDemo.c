/*
 *Author(s): Victor Nguyen, David Ryan, Collin Sipple
 *Date Created: 11/8/2018
 *Date Modified: 11/8/2018
 *Purpose: Demonstrate the functions in library binomial.h
 */

#include<stdlib.h>
#include<stdio.h>
#include"binomial.h"

int main(int argc, char **argv) {
  if(argc != 3) {
    printf("Correct usage: a.out n k\n");
  }
  //Create a memoization values table initialized to -1
  long **memoizationTable = (long **) malloc(sizeof(long *) * (atoi(argv[1]) + 1));
  for(int i = 0; i < (atoi(argv[1]) + 1); i++) {
    memoizationTable[i] = (long *) malloc(sizeof(long) * (atoi(argv[2]) + 1));
    for(int j = 0; j < (atoi(argv[2]) + 1); j++) {
      memoizationTable[i][j] = -1;
    }
  }
  //Take two numbers n, k for choose()
  long biCoeff = chooseCare(atoi(argv[1]), atoi(argv[2]), memoizationTable);
  printf("C(%d, %d) = %ld\n", atoi(argv[1]), atoi(argv[2]), biCoeff);
  for(int i = 0; i < (atoi(argv[1]) + 1); i++) {
    free(memoizationTable[i]);
  }
  free(memoizationTable);
  return 0;
}

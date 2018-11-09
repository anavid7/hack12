/*
 *Author(s): Victor Nguyen, David Ryan, Collin Sipple
 *Date Created: 11/8/2018
 *Date Modified: 11/8/2018
 */

#include<stdlib.h>
#include"binomial.h"

long choose(int n, int k) {
  if(k > n || k < 0 || n < 0) {
    return 0;
  }
  if(k == 0 || n == k) {
    return 1;
  }
  return (choose((n - 1), k) + choose((n - 1), (k - 1)));
}

long chooseCare(int n, int k, long **table) {
  if(k > n || k < 0 || n < 0) {
    return 0;
  }
  if(k == 0 || n == k) {
    return 1;
  }
  if(table[n][k] != -1) {
    return table[n][k];
  } else {
    table[n][k] = chooseCare((n - 1), k, table) + chooseCare((n - 1), (k - 1), table);
  }
  return (chooseCare((n - 1), k, table) + chooseCare((n - 1), (k - 1), table));
}

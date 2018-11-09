/*
 *Author(s): Victor Nguyen, David Ryan, Collin Sipple
 *Date Created: 11/8/2018
 *Date Modified: 11/8/2018
 *Purpose: Provide functions that facilitate recursion and memoization processes
 */

//Compute the binomial coefficient C(n, k) aka "n choose k" using Pascal's Rule
long choose(int n, int k);

//Like function above, but inputs a table that checks if a value has been
//computed already and stores it in that table
long chooseCare(int n, int k, long **table);

/**
 * FIbonacci N-th term calculator
 *
 * Author: Gustavo Diniz da Corte
 * Email: gustavodacorte@gmail.com
 */

#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>
#include <iterator>
#include <cmath>

using namespace std;

vector<long> getNthTermRecursively(long *, int termIndex, int startingSize = 2,  long startingN = 1);
void getNthTermRecursively(vector<long> * sequence, int termIndex, long startingN);

vector<long> getNthTermIteratively(long *, int termIndex, int startingSize = 2,  long startingN = 1);
long getNthTermDirectly(int termIndex);

void calculateNextFibonacciTerm(vector<long> * sequence);

const double GOLDEN_RATIO = 1.618034;


#endif

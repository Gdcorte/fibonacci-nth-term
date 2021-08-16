/**
 * FIbonacci N-th term calculator
 *
 * Author: Gustavo Diniz da Corte
 * Email: gustavodacorte@gmail.com
 */

#include <iostream>
#include <vector>
#include <iterator>
#include <cmath>

#include "include/fibonacci.h"

using namespace std;

int main(int argc, const char * argv[]) {
    //initial sequence will always have length of two, we assume here it starts with the term F0, F1. This can be adjusted
    long initialSeq[] = {0, 1};
    int termIndex;
    vector<long> termValueRecursive,
                 termValueIteractive;
    long termValueDirect;

    // insert code here...
    cout << "Please type desired n-th term (and press enter): ";
    cin >> termIndex;

    termValueRecursive = getNthTermRecursively(initialSeq, termIndex);
    termValueIteractive = getNthTermIteratively(initialSeq, termIndex);
    termValueDirect = getNthTermDirectly(termIndex);

    cout << "The n-th term is (recusrsive approach): " << termValueRecursive.back() << "\n";
    cout << "The n-th term is (iteractive approach): " << termValueIteractive.back() << "\n";
    cout << "The n-th term is (direct approach): " << termValueDirect << "\n";

    return 0;
}

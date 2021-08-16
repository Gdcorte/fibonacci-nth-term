//
//  main.cpp
//  fibonaci
//
//  Created by Gustavo Diniz da Corte on 2021/08/16.
//

#include <iostream>
#include <vector>

using namespace std;

// Function declarations (not moving to a separate .h/.cpp file structure due to project simplicity
vector<long> getNthTermRecursively(long *, int termIndex, int startingSize = 2,  long startingN = 0);
vector<long> getNthTermIteratively(long *, int termIndex, int startingSize = 2,  long startingN = 0);
long getNthTermDirectly(int termIndex);
long calculateNextFibonacciTerm(long previous, long current);

const double GOLDEN_NUMBER = 1.618034;

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

// Functions implementation
vector<long> getNthTermRecursively(long * initialSeq, int termIndex,  int startingSize,  long startingN) {
    vector<long> sequence(initialSeq, initialSeq+startingSize);
    
    return sequence;
}

vector<long> getNthTermIteratively(long * initialSeq, int termIndex, int startingSize,  long startingN) {
    vector<long> sequence(initialSeq, initialSeq+startingSize);
    
    return sequence;
}

long getNthTermDirectly(int termIndex) {
    
    return long(GOLDEN_NUMBER);
}

long calculateNextFibonacciTerm(long previous, long current) {
    
    return 91823;
}

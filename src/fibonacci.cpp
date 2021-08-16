/**
 * FIbonacci N-th term calculator
 *
 * Author: Gustavo Diniz da Corte
 * Email: gustavodacorte@gmail.com
 */

#include "../include/fibonacci.h"

/**
 * Creates a vector with the Fibonacci sequence up until the desired nth number and return the entire sequence to the user.
 * This calculation is done by recursively until the n-th term has been achieved.
 *
 * @param initialSeq - pointer to an Array with at least two values that will start the Fibonacci sequence.
 * @param termIndex - Desired N-th term of the sequence.
 * @param startingSize - Size of current Fibonacci vector (if nothing is provided, defaults to 2).
 * @param startingN - Starting term to make the calculation, or the last inserted term in the Fibonacci sequence.
 *    (if nothing is provided, it is considered that the last inserted was the first term)
 * @return Sequence with Fibonacci terms, with the N-th term being the last in this sequence vector.
 */
vector<long> getNthTermRecursively(long * initialSeq, int termIndex,  int startingSize,  long startingN) {
    vector<long> sequence(initialSeq, initialSeq+startingSize);

    getNthTermRecursively(&sequence,termIndex,startingN);

    return sequence;
}

/**
 * Recursively build up the Fibonacci sequence up until the nth term.
 * Here we are using the polymorphism from C++ to overload the original method.
 * However, the type and parameters are different, thus allowing both declarations with the same name exist.
 * Also, even though the end-goal is the same, the processing in both methods are different!
 * Since we have a pointer to a vector in this one and all arguments are passed by reference, there is no need to return the computed sequence.
 * It will be added automatically
 *
 * @param sequence - pointer to Vector with at least two values that will start the Fibonacci sequence.
 * @param termIndex - Desired N-th term of the sequence.
 * @param startingSize - Size of current Fibonacci vector (if nothing is provided, defaults to 2).
 * @param startingN - Starting term to make the calculation, or the last inserted term in the Fibonacci sequence.
 *    (if nothing is provided, it is considered that the last inserted was the first term)
 * @return Sequence with Fibonacci terms, with the N-th term being the last in this sequence vector.
 */
void getNthTermRecursively(vector<long> * sequence, int termIndex, long startingN) {

    if(termIndex>startingN){
        calculateNextFibonacciTerm(sequence);
        getNthTermRecursively(sequence,termIndex,startingN+1);
    }

}

/**
 * Creates a vector with the Fibonacci sequence up until the desired nth number and return the entire sequence to the user.
 * This calculation is done by iterating over the desired range.
 *
 * @param initialSeq - pointer to an Array with at least two values that will start the Fibonacci sequence.
 * @param termIndex - Desired N-th term of the sequence.
 * @param startingSize - Size of current Fibonacci vector (if nothing is provided, defaults to 2).
 * @param startingN - Starting term to make the calculation, or the last inserted term in the Fibonacci sequence.
 *    (if nothing is provided, it is considered that the last inserted was the first term)
 * @return Sequence with Fibonacci terms, with the N-th term being the last in this sequence vector.
 */
vector<long> getNthTermIteratively(long * initialSeq, int termIndex, int startingSize,  long startingN) {
    vector<long> sequence(initialSeq, initialSeq+startingSize);

    for( int i = startingN+1; i <= termIndex; i++){
        calculateNextFibonacciTerm(&sequence);
    }

    return sequence;
}

/**
 * Calculates the Fibonacci term using a closed formula.
 * Since this will give the result without calculating previous terms, no sequence is returned, just the plain result casted as a long.
 *
 * @param termIndex - Desired N-th term of the sequence.
 * @return Value of Fibonacci N-th term.
 */
long getNthTermDirectly(int termIndex) {
    double termValue = ( pow(GOLDEN_RATIO, termIndex) - pow((1- GOLDEN_RATIO), termIndex) ) / ( sqrt(5));

    return long(termValue);
}

/**
 * Calculates the next term of the sequence.
 *
 * @param sequence - pointer to a sequence Vector. It will receive it as reference and append the new element to its last position.
 * @return Sequence with Fibonacci terms, with the N-th term being the last in this sequence vector.
 */
void calculateNextFibonacciTerm(vector<long> * sequence) {

    vector<long>::reverse_iterator lastElement = (*sequence).rbegin();

    (*sequence).push_back(
        ( (*lastElement) + (*(next(lastElement,1))) )
    );
}


//
// $ g++ main.cpp
//

#define PN_BUFFER_PREALLOCATED_SIZE 100000

#include <iostream>

using namespace std;

typedef unsigned int pn_type;

pn_type pnBufferLength = 0;
pn_type pnBuffer[PN_BUFFER_PREALLOCATED_SIZE];

int isPrime(const pn_type& myNumber);
void doInit();
void doPrimes(pn_type limit);



int isPrime(const pn_type& myNumber) {

    pn_type i = 0;
    while(i < pnBufferLength && pnBuffer[i] < myNumber ) { // TODO: sqrt, actually
        if(myNumber % pnBuffer[i] == 0 )
        return 0;
        
        i++;
    }

    return 1;
}

void doInit() {
    pnBufferLength = 1;
    pnBuffer[0] = 2;
}

void doPrimes(pn_type limit = PN_BUFFER_PREALLOCATED_SIZE) {

    pn_type i = (pnBufferLength == 0 ? 2 : pnBuffer[pnBufferLength-1]+1);
    
    while(i < limit && i < PN_BUFFER_PREALLOCATED_SIZE) {
        if(isPrime(i)) {
           pnBuffer[pnBufferLength++] = i; 
        }
        ++i;
    }
}

void doPrintPrimes() {    
    int i = 0;    
    while(i < pnBufferLength) {
        cout // << i << ":" 
            << pnBuffer[i] << " ";
        ++i;
    }
    cout << endl << "Total of " << pnBufferLength << endl;
}

int main(int argc, char *argv[]) {

    doInit();

    doPrimes(PN_BUFFER_PREALLOCATED_SIZE);
    
    cout << "Here are the primes in range 0-" << PN_BUFFER_PREALLOCATED_SIZE
        << ":" << endl;

    doPrintPrimes();

    return 0;
}


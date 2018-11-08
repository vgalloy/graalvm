#include <stdio.h>
#include <stdlib.h>
#include <string.h>


long fibo(int rank);

int main(int argc, char* argv[]) {
   int input = atoi(argv[1]);
   long result = fibo(input);
   printf("Result : %ld\n", result);
   return 0;
}


long fibo(int rank) {
    if(rank == 0 || rank == 1) {
        return rank;
    }
    return fibo(rank - 1) + fibo(rank - 2);
}
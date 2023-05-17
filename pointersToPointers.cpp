#include <iostream>
#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;
    
    *p = 6;
    
    printf("x = %d", x); // x = 6
    printf("\np points to value -> %d", *p); // p points to value -> 6
    
    int **q = &p;
    int ***r = &q;
    
    ***r = 10;
    
    printf("\nx = %d", x); // x = 10
    printf("\np points to value -> %d", *p); // p points to value -> 10
    printf("\nq points to value -> %d", **q); // q points to value -> 10
    printf("\nr points to value -> %d", ***r); // r points to value -> 10

    return 0;
}

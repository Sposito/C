
/* primeBruteForce.c
Prime Number Calculator
Created by Thiago Sposito on 16/03/2016.

This Algorithm loops over the full range of integers 
from 2 to the number finding out if it has any divisors to determine number primality.*/

#include <stdio.h>

#define true = 1
#define false = 0

int IsPrime(int number){
    for(int j = 2;j < number;j++){
        int resto = number % j;
        if (resto == 0){
            return 0;
        }
        
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Calculating Prime Numbers\n");
    int total = 0;
    for (int i = 0; i < 10; i++){
        int test = IsPrime(i);
        if(  test == 1 ){
            printf("%d\n", i);
            total++;
        }
    }
 
     printf("Total: %d\n", total);
    return 0;
}

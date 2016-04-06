
/* primeBruteForce.c
Prime Number Calculator
Created by Thiago Sposito on 16/03/2016.

This Algorithm loops over the full range of integers 
from 2 to the number finding out if it has any divisors to determine number primality.*/

#include <stdio.h>
#include <time.h>

#define true = 1
#define false = 0
//Tries by brute force divide a number for all its predecessors if the remais are it aborts
int IsPrime(int number){
    for(int j = 2;j < number;j++){
        int ramainder = number % j;
        if (ramainder == 0){ // Detecting that a number isnt prime early prevents long calculations
            return 0;
        }
        
    }
    return 1;
}

int Calculate(){
    int myInt;
    printf("How far do you dare to explore?\nBig numbers brings big...!!\n");
    int result = scanf("%d", &myInt); // Get the number of iterations
    
    if (result == EOF) { //Input Error Handling
        printf("Invalid Input. You Should use an intager!!\n");
        Calculate();
        return 0;
    }
    
    time_t start_t, end_t, total_t; // Variables used to keep track of time
    start_t = clock(); //Get the clock at the beggining of calculations
    
    printf("Calculating Prime Numbers\n");
    int total = 0;
    for (int i = 0; i < myInt; i++){
        int test = IsPrime(i);
        if(  test == 1 && i > 1   ){
            printf("%d\n", i);
            total++;
        }
    }
    end_t = clock();
    total_t = (end_t - start_t) / CLOCKS_PER_SEC;
    printf("Total time to compute: %ld seconds\n", total_t);
    printf("Total: %d\n\n\n\n", total);
    Calculate();
    return 0;
}

int main(int argc, const char * argv[]) {
    Calculate();
    return 0;
}

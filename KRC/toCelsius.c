#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
   
    fahr = lower;
    printf("   F\t   C\n");
    while(fahr <= upper){
        celsius = 5.0 / 9.0 * (fahr - 32);
        printf("%6.1f\t%6.1f\n",fahr,celsius);
        fahr += step;
       // printf(":  \n ");
    }

    return 0;
}

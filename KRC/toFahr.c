#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
   
    celsius = lower;
    printf("   C\t   F\n");
    while(celsius <= upper){
        fahr = 9.0 / 5.0   * celsius + 32;
        printf("%6.1f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}

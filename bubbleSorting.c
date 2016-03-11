//Bubble Sorting algorithm
//by Thiago Sposito

#include <stdio.h>
int main(int argc, const char * argv[]) {

    int numbers[5];
    
    printf("Sorting Algorithm \nInsira 5 números:\n");
    scanf("%d %d %d %d %d", &numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4]);
    
    int aux;// variável auxiliar
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            if (numbers[i]  < numbers[j] ){
                aux = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = aux;
            }
        }
    }
    printf("Sorted: %d %d %d %d %d ",numbers[0],numbers[1],numbers[2],numbers[3],numbers[4] );
    return 0;
}

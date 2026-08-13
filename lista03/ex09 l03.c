#include <stdio.h>

void main(){
    // Laço para cada tabuada (1 até 10)
    for(int i = 1; i <= 10; i++){
        printf("Tabuada do %d:\n", i);

        // Laço para multiplicações (1 até 10)
        for(int j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n"); // Linha em branco entre tabuadas
    }
}
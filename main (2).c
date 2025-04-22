/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numeros[6], cubos[6];
    
    for (int i = 0; i < 6; i++){
        printf("Digite um numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        cubos[i] = numeros[i] * numeros[i] * numeros [i];
    }
    
    printf("numero:\n Cubo: \n");
    for (int i = 0; i < 6; i++){
        printf("%d\n%d\n", numeros[i], cubos[i]);
    }

    return 0;
}
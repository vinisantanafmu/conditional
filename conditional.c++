#include <stdio.h>

float numero;

int main() {
    
    printf("Bem vindo ao checador de números\n\n");
    printf("Digite o número que deseja checar:\n");
    scanf("%f", &numero);
    
    if (numero >= 0) {
        printf("\n\né positivo!");
    }
    else {
        printf("\n\né negativo!");
    }
    
    
    return 0;
}

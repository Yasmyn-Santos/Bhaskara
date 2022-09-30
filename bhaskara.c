#include <stdio.h>
#include <math.h>

/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem 
correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o 
ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.*/
 
int main() {
    
    double A, B, C, delta;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    delta = (B*B)-4*A*C;
    
    if (delta >= 0 && A!=0){
        printf("R1 = %.5lf\n", ((B*-1) + sqrt(delta)) / (2*A));
        printf("R2 = %.5lf\n", ((B*-1) - sqrt(delta)) / (2*A));
    }else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}

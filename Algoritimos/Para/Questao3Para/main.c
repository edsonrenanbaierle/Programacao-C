/* 3. Nome: Edson Renan Baierle
 Escreva um algoritmo que calcule o valor de H, sendo que ele é determinado pela série:
H = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcH(int numero);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
    valor=calcH(num);
    printf("Valor de H= %.2f", valor);

}

float calcH(int numero){
    float cima=1, baixo=1, x;
    float total=0;

    for(x=1;x<=numero;x++){
        total=cima/baixo;
        baixo++;
        cima=cima+2;
    }

    return total;
}

/*9. Faça um algoritmo para ler três valores numéricos e escrever o maior entre eles. Considere que
não haverá valores iguais.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calc_maior(int numero1);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, ind, x;

    for(ind=1;ind<=3;ind++){
        printf("\nDigite um número: ");
        scanf("%d", &num);
        x=calc_maior(num);
    }
    printf("O maior número é: %d", x);
}

int calc_maior(int numero1){
    static int maior=0;

    if(numero1>maior)
        maior=numero1;

    return maior;

}

/*9. Fa�a um algoritmo para ler tr�s valores num�ricos e escrever o maior entre eles. Considere que
n�o haver� valores iguais.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calc_maior(int numero1);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, ind, x;

    for(ind=1;ind<=3;ind++){
        printf("\nDigite um n�mero: ");
        scanf("%d", &num);
        x=calc_maior(num);
    }
    printf("O maior n�mero �: %d", x);
}

int calc_maior(int numero1){
    static int maior=0;

    if(numero1>maior)
        maior=numero1;

    return maior;

}

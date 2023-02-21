/*2. Nome: Edson Renan Baierle
Faça um algoritmo que mostre as tabuadas dos números de 1 a 10. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calctabuada(int numero);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o número que deseje saber a tabuada de 1 a 10: ");
    scanf("%d", &num);
    calctabuada(num);
}

void calctabuada(int numero){
    int x, valores=1, total;

    for(x=1;x<=10;x++){
        total=numero*valores;
        printf("%d X %d = %d\n", numero, valores, total);
        valores++;
    }
}

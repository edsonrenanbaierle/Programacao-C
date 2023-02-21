/*5. Faça um algoritmo que escreve a tabuada até 10 dos dez primeiros números inteiros positivos permitindo a
repetição do cálculo para novo número após ler “S” ou “N” como resposta para: Escrever nova tabuada (S/N)?.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_tabuada(int numero);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    char resp='S';

    while(resp!='N'){
        printf("Qual número deseja saber a tabuada: ");
        scanf("%d", &num);
        calc_tabuada(num);
        printf("\nDigite N para parar e S para ver uma nova tabuada: ");
        scanf("%s", &resp);
    }
}

void calc_tabuada(int numero){
    int calc;
    static int ind;

    for(ind=1;ind<=10;ind++){
        calc=numero*ind;
        printf("\n%d X %d = %d", numero, ind, calc);
    }
}

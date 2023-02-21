/*5. Fa�a um algoritmo que escreve a tabuada at� 10 dos dez primeiros n�meros inteiros positivos permitindo a
repeti��o do c�lculo para novo n�mero ap�s ler �S� ou �N� como resposta para: Escrever nova tabuada (S/N)?.*/

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
        printf("Qual n�mero deseja saber a tabuada: ");
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

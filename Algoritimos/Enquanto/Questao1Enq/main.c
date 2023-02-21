/*1. Fa�a um algoritmo que l� um n�mero indeterminado de valores, todos inteiros, um de cada vez, finalizando
a leitura com o n�mero zero e forne�a como sa�da:
a) a soma dos n�meros que est�o no intervalo 10(inc) a 20(inc)
b) a m�dia dos n�meros que est�o no intervalo de 1(inc) a 10 (exc)
c)o menor entre os valores lidos*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int soma(int numero, int icremento);
int media1a10(int num1, int inc1);
int menorV(int num2);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num=1, inc=0, totalsoma, media, menorval;//totalsoma menorvalor

    while(num!=0){
        inc++;
        printf("\nDigite um n�mero: ");
        scanf("%d", &num);
        totalsoma=soma(num, inc);
        media=media1a10(num, inc);
        menorval=menorV(num);
    }
    printf("\nA soma dos intervalos entre 10 e 20 �: %d", totalsoma);
    printf("\nA m�dia dos n�meros que est�o no intervalo 1 a 10 �: %d", media);
    printf("\nO menor valor digitado foi: %d", menorval);

}

int soma(int numero, int icremento){
    int static totsoma=0;

    if(icremento>=10&&icremento<=20){
        totsoma=totsoma+numero;
    }
    return totsoma;
}

int media1a10(int num1, int inc1){
    int static totvalor=0, x=0; //media, x � para saber quantos n�meros foram digitados para ser feita a media correta
    int med;
    if(inc1>=1&&inc1<=10){
        totvalor=totvalor+num1;
        x++;
    }
    med=totvalor/x;

    return med;
}

int menorV(int num2){
    int static menor=999;

    if(num2<menor&&num2!=0)
        menor=num2;

    return menor;
}

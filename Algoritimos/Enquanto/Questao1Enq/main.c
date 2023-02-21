/*1. Faça um algoritmo que lê um número indeterminado de valores, todos inteiros, um de cada vez, finalizando
a leitura com o número zero e forneça como saída:
a) a soma dos números que estão no intervalo 10(inc) a 20(inc)
b) a média dos números que estão no intervalo de 1(inc) a 10 (exc)
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
        printf("\nDigite um número: ");
        scanf("%d", &num);
        totalsoma=soma(num, inc);
        media=media1a10(num, inc);
        menorval=menorV(num);
    }
    printf("\nA soma dos intervalos entre 10 e 20 é: %d", totalsoma);
    printf("\nA média dos números que estão no intervalo 1 a 10 é: %d", media);
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
    int static totvalor=0, x=0; //media, x é para saber quantos números foram digitados para ser feita a media correta
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

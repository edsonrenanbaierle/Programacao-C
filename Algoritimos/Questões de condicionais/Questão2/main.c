/*Faça um programa que receba quatro notas, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, n, n1=0, media;

    for(x=1;x<=4;x++){
        printf("Qual a nota do aluno: ");
        scanf("%d", &n);
        n1=n1+n;
    }
    media=n1/x;
    if(media>=7)
        printf("Parabéns você foi aprovado!");
        else
            printf("Infelizmente você foi reprovado!");

}

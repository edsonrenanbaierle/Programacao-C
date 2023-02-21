/*Faça um programa que receba a idade de varias pessoas. Calcule e mostre a média das pessoas, encerra a entrada de dados
com o valor zero*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcula(int id);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, x=0;
    float media, soma=0;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    while(idade!=0){
        calcula(idade);
        printf("\nDigite sua idade: ");
        scanf("%d", &idade);
    }

    media=soma/x;
    printf("\nA média das idades é: %.2f", media);
}

float calcula(int id){
    static float soma=0, x=0;
    float media;

    soma=soma+id;
    x++;

    media=soma/x;
    return media;

}



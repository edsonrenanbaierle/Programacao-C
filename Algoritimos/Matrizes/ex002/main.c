/*2. Faça um programa que leia um vetor de 15 posições de números inteiros e divida os seus elementos pela média dos
elementos do vetor. Mostre o vetor após os cálculos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 15

void novoVet(float VV[], float mediaV);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ind;
    float media, soma=0, V[MAX];

    for(ind=0;ind<MAX;ind++){
        printf("\nDigite um número inteiro: ");
        scanf("%f", &V[ind]);
        soma=soma+V[ind];
    }
    media=soma/MAX;
    novoVet(V, media);
}

void novoVet(float VV[], float mediaV){
    int ind2;

    for(ind2=0;ind2<MAX;ind2++){
        VV[ind2]=VV[ind2]/mediaV;
        printf("\nVetor pósição %d = %.2f", ind2+1, VV[ind2]);
    }
}

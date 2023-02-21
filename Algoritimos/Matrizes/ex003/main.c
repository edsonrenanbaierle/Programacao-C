/*Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois vetores
resultantes. O primeiro com os números pares e o segundo com os números ímpares.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void comparar(int VV[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int V[9], ind;

    for(ind=0;ind<10;ind++){
        printf("\nDigite um número inteiro: ");
        scanf("%d", &V[ind]);
    }
    comparar(V);
}

void comparar(int VV[]){
    int ind2, VI[10], VP[10], indP=0, indI=0;

    for(ind2=0;ind2<10;ind2++){
        if(VV[ind2]%2==0){
            VP[indP]=VV[ind2];
            indP++;
        }
        else{
             VI[indI]=VV[ind2];
             indI++;
        }
    }

    printf("\t\nVetor Par");
    for(ind2=0;ind2<indP;ind2++){
         printf("\nPosilçao %d - %d", ind2+1, VP[ind2]);
    }

    printf("\t\nVetor Impar");
    for(ind2=0;ind2<indI;ind2++){
            printf("\nPosilçao %d - %d", ind2+1, VI[ind2]);
    }
}

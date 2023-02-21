/*2. Faça um programa que leia um vetor de 20 elementos e determine quantos elementos do vetor são iguais
Nome: Edson Renan Baierle*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 3

void iguais(int VV[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int V[MAX], ind;//tot vai receber quantos iguais tem

    for(ind=0;ind<MAX;ind++){
        printf("Digite um Número A ser guardado no V[%d]: ", ind+1);
        scanf("%d", &V[ind]);
    }
    iguais(V);

}

void iguais(int VV[]){
    int ind2, guardavalor, ind3, igual=0, aux, j;

    for(ind2=0;ind2<MAX;ind2++){
        aux=0;
        for(ind3=ind2+1;j<MAX;ind3++){
            if(VV[ind2]==VV[ind3])
                aux=1;
        }
        if(aux==1)
            printf("%d", VV[ind2]);
    }

    printf("\nO valor de iguais é: %d", igual);
}

/*1. Faça um programa que leia um vetor V contendo 18 elementos. A seguir, distribua esses elementos em uma matriz
3x6. Ao final, mostre a matriz gerada. Veja a seguir um exemplo do que o seu programa deve fazer:
*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 6
#define MAX2 3

void VparaM(int VV[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int V[18], ind;

    for(ind=0;ind<18;ind++){
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &V[ind]);
    }
    sleep(1);
    system("cls");

    VparaM(V);
}

void VparaM(int VV[]){
    int M[MAX2][MAX], i, j, ind2=0;//M é a matriz, I a linha, J a coluna

    for(i=0;i<MAX2;i++){
        for(j=0;j<MAX;j++){
            M[i][j]=VV[ind2];
            ind2++;
        }
    }

    printf("\t\t\tMATRIZ\n");
    for(i=0;i<MAX2;i++){
        for(j=0;j<MAX;j++){
            printf("\t%d", M[i][j]);
        }
        printf("\n");
    }
}

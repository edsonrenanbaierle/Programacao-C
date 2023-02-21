/*Faça um algoritmo que carregue uma matriz 4 x 4 com números inteiros e verifique se essa matriz forma o chamado
quadrado mágico. Um quadrado mágico é formado quando a soma dos elementos de cada linha é igual à soma dos
elementos de cada coluna e igual à soma dos elementos da diagonal principal e igual, também, à soma dos elementos da
diagonal secundária.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[MAX][MAX], i, j;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("\nDigite um Número Inteiro: ");
            scanf("%d", &M[i][j]);
        }
    }

    QuadrMagic(M);
}

void QuadrMagic(int matriz[MAX][MAX]){
    int i, j, somaL=0, somaLTOT=0, contL=0, somaCDS=0, somaCDP=0, somaC=0,  somaCTOT=0, contC=0;//soma diagonal pricipal e diagonal sec.

    printf("\n\tMatriz Resultante\n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("\t%d ", matriz[i][j]);
            somaL=somaL+matriz[i][j];
            if(i==j)
                somaCDP=somaCDP+matriz[i][j];

            if(i+j==MAX-1)
                somaCDS=somaCDS+matriz[i][j];
        }
    if(somaLTOT==0)
        somaLTOT=somaL;
        else if(somaLTOT==somaL)
            contL++;

    printf("\n");
    somaL=0;
    }

    for(j=0;j<MAX;j++){
        for(i=0;i<MAX;i++){
           somaC=somaC+matriz[i][j];
        }
    if(somaCTOT==0)
        somaCTOT=somaC;
        else if(somaCTOT==somaC)
            contC++;
    somaC=0;
    }

    if(contC==MAX-1 && contL==MAX-1 && somaCDP==somaCDS)
        printf("\nQuadrado perfeito!!");
    else
        printf("\nQuarado Imperfeito!!");
}

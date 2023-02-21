/*Elabore um algoritmo que preencha:
 Um vetor com cinco números inteiros;
 Outro vetor com dez números inteiros;
 Uma matriz 4 x 3, também com números inteiros;
O algoritmo deverá calcular e mostrar:
 O maior elemento do primeiro vetor multiplicado pelo menor elemento do segundo vetor. O resultado dessa
multiplicação, adicionado aos elementos digitados da matriz, dará origem a uma segunda matriz (resultante).
 A soma dos elementos pares de cada linha da matriz resultante;
 A quantidade de elementos entre 1 e 5 em cada coluna da matriz resultante.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 4
#define MAX1 3

void matrizres(int matriz[MAX][MAX1], int total);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int V1[4], V2[9], M[MAX][MAX1], i, j, ind, maior, menor, tot;

    printf("\n\tVetor 1");
    for(ind=0;ind<5;ind++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &V1[ind]);
        if(ind==0)
            maior=V1[ind];
        if(maior<V1[ind])
            maior=V1[ind];
    }

    sleep(1);
    system("cls");

    printf("\n\tVetor 2");
    for(ind=0;ind<10;ind++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &V2[ind]);
        if(ind==0)
            menor=V2[ind];
        if(menor>V2[ind])
            menor=V2[ind];
    }

    sleep(1);
    system("cls");

    printf("\tMatriz");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("\nDigite um numero inteiro: ");
            scanf("%d", &M[i][j]);
        }
    }

    tot=maior*menor;
    printf("\n\taaa %d", menor);

    matrizres(M, tot);
}

void matrizres(int matriz[MAX][MAX1], int total){
    int i, j;

    printf("\tMatriz Principal\n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("\t%d", matriz[i][j]);
        }
    printf("\n");
    }

    printf("\tSegunda Matriz\n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("\t%d", matriz[i][j]+total);
        }
    printf("\n");
    }
}

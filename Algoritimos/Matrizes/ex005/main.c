/*Faça um programa que calcule a soma dos elementos da diagonal principal de uma matriz 4 x 4.
Exemplo da diagonal principal de uma matriz:*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 4

void calc_matriz(int matriz[MAX][MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[MAX][MAX], i, j;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("\n Digite o número inteiro da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    calc_matriz(M);
}

void calc_matriz(int matriz[MAX][MAX]){
    int i, j, soma=0;

    sleep(1);
    system("cls");
    printf("\n\tMatriz Formada!\n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("\t%d", matriz[i][j]);
            if(i==j)
                soma=soma+matriz[i][j];
        }
        printf("\n");
    }

    printf("\nA soma da Matriz diagonal princiapal é: %d", soma);
}

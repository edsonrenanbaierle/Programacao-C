/*Crie um programa para calcular a matriz transposta de uma matriz, fornecida pelo utilizador. Exemplo de matriz
transposta:
*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void prenchimento_da_matriz(int M1, int M2);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int MAX1, MAX2;

    printf("\nMatriz Transposta!");
    printf("\nDigite quantos linhas tem sua Matriz: ");
    scanf("%d", &MAX1);
    printf("\nDigite quantos colunas tem sua Matriz: ");
    scanf("%d", &MAX2);

    sleep(1);
    system("cls");
    prenchimento_da_matriz(MAX1, MAX2);
}

void prenchimento_da_matriz(int M1, int M2){
    int i, j, M[M1][M2];

    for(i=0;i<M1;i++){
        for(j=0;j<M2;j++){
            printf("\nDigite da linhas %d e da coluna %d de sua Matriz: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    sleep(1);
    system("cls");

    printf("\n\tMatriz Formada!\n");
    for(i=0;i<M1;i++){
        for(j=0;j<M2;j++){
            printf("\t%d", M[i][j]);
        }
        printf("\n");
    }

    printf("\n\tMatriz Transposta!\n");
    for(j=0;j<M2;j++){
        for(i=0;i<M1;i++){
            printf("\t%d", M[i][j]);
        }
        printf("\n");
    }
}




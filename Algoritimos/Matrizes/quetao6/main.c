//Questão 6   NOME: Edson Renan Baierle
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 3
#define MAX1 10


void notas(float matriz[][MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j;//matriz com 4 linhas e 3 colunas
    float SOMA, M[MAX1][MAX];

    for(i=0;i<MAX1;i++){//linha movimentada
        for(j=0;j<MAX;j++){//coluna movimentada
            printf("\nDigite o valor que deseja armazenar: ");
            scanf("%f", &M[i][j]);
        }
    }

    printf("\t--MATRIZ--\n");
    //saida de dados
    for(i=0;i<MAX1;i++){//linha movimentada
        printf("Aluno %d", i+1);
        for(j=0;j<MAX;j++){//coluna movimentada
            printf("\t%.2f ", M[i][j]);
        }
        printf("\n");
    }

    notas(M);//chamando a função soma valores
}

void notas(float matriz[][MAX]){
    int i, j;// vai dizer a posição da linha e da coluna
    float soma=0, media;//GuardL vai guardar a linhas que esta sendo somada

    for(i=0;i<MAX1;i++){//linha movimentada
        for(j=0;j<MAX;j++){//coluna movimentada
            soma=soma+matriz[i][j];
            media=soma/3;
            }
    printf("\nA media do Aluno %d foi - %.2f", i+1, media);
    media=0;
    soma=0;
    }
}

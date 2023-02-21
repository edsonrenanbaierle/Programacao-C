//Questão 4  Nome: Edson Renan Baierle
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 5


void soma_valores(float matriz[][MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j;//matriz com 4 linhas e 3 colunas
    float SOMA, M[MAX][MAX];

    for(i=0;i<MAX;i++){//linha movimentada
        for(j=0;j<MAX;j++){//coluna movimentada
            printf("\nDigite o valor que deseja armazenar: ");
            scanf("%f", &M[i][j]);
        }
    }

    printf("\t--MATRIZ--\n");
    //saida de dados
    for(i=0;i<MAX;i++){//linha movimentada
        for(j=0;j<MAX;j++){//coluna movimentada
            printf("\t%.2f ", M[i][j]);
        }
        printf("\n");
    }

    soma_valores(M);//chamando a função soma valores
}

void soma_valores(float matriz[][MAX]){
    int i, j, GuarL, posicaoL=0, posicaoC=0;// vai dizer a posição da linha e da coluna
    float soma=0, VL[5], VC[5];//GuardL vai guardar a linhas que esta sendo somada

    for(i=0;i<MAX;i++){//linha movimentada
        for(j=0;j<MAX;j++){//coluna movimentada
            soma=soma+matriz[i][j];
            VL[i]=soma;
            }
        soma=0;
    }

    for(j=0;j<MAX;j++){//coluna movimentada
        for(i=0;i<MAX;i++){//linha movimentada
            soma=soma+matriz[i][j];
            VC[j]=soma;
            }
    soma=0;
    }


    printf("\n----SOMA DAS LINHAS----\n");
    for(i=0;i<5;i++){
        posicaoL++;
        printf("\nSoma da linha %d - %.2f", posicaoL, VL[i]);
    }

    printf("\n");
    printf("\n----SOMA DAS COLUNAS----");
    for(j=0;j<5;j++){
        posicaoC++;
        printf("\nSoma da coluna %d - %.2f", posicaoC, VC[j]);
    }
    printf("\n");


}

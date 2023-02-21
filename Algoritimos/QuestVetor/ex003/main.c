/*Faça um programa que leia dois vetores X[10] e Y[10] de inteiros. Crie, a seguir, um vetor U que seja a
união de X com Y, e um vetor I que seja a sua intersecção. Mostre todos os vetores.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

void vetorI(int X1[], int Y1[]);
void VetorU(int X1[], int Y1[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Y[MAX], X[MAX], ind;

    printf("\nVetor X\n");
    for(ind=0;ind<MAX;ind++){
        printf("\nDigite número inteiro - Vetor X[%d]: ", ind+1);
        scanf("%d", &X[ind]);
    }


    printf("\nVetor Y\n");
    for(ind=0;ind<MAX;ind++){
        printf("\nDigite número inteiro - Vetor X[%d]: ", ind+1);
        scanf("%d", &Y[ind]);
    }

    vetorI(X, Y);
    VetorU(X, Y);
}

void vetorI(int X1[], int Y1[]){
    int I[MAX], ind, ind2, ind3=0, igual=0, quant, ajudante;//quantidade ira guardar quantos foram para o vetor de intersecçãp

    for(ind=0;ind<MAX;ind++){
        for(ind2=0;ind2<MAX;ind2++){
            if(X1[ind]==Y1[ind2] && igual<1){
                I[ind3]=X1[ind];
                ind3++;
                igual++;
                quant++;
            }
        }
    igual=0;
    }

     for(ind=0;ind<quant;ind++)
    {
        for(ind2=ind+1;ind2<quant;)
        {
            if(I[ind2]==I[ind])
            {
                for(ind3=ind2;ind3<quant;ind3++ )
                    I[ind3]=I[ind3+1];

                quant--;
            }
            else
            {
                ind2++;
            }
        }
    }


    printf("\nVetor Intersecção!\n");
    for(ind3=0;ind3<quant;ind3++){
        printf("\nVetor I[%d]:%d", ind3+1, I[ind3]);
    }
}


void VetorU(int X1[], int Y1[]){
    int U[20], ind, ind2;

    for(ind=0;ind<MAX;ind++){
        U[ind]=X1[ind];
        U[ind+10]=Y1[ind];
    }

    printf("\n\n\nVetor União!\n");
    for(ind=0;ind<20;ind++){
        printf("\nVetor U[%d]:%d", ind+1, U[ind]);
    }
}

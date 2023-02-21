/*5. Escreva um programa que leia um vetor V[20] de inteiros. Compacte, a seguir, este vetor, retirando dele
todos os valores nulos ou negativos e escreva o vetor compactado. Compacte o vetor ainda mais, retirando
agora os elementos em duplicata. Escreva o vetor final.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void vet(int V1[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int V[MAX], ind;//tot vai receber quantos iguais tem

    printf("\n\t\tVetor 1\n");
    for(ind=0;ind<MAX;ind++){
        printf("Digite um Número A ser guardado no V[%d]: ", ind+1);
        scanf("%d", &V[ind]);
    }

    vet(V);
}

void vet(int V1[]){
    int ind, x, tamanho=0, ind2;//x vai ser utilizador para a remoção dos impares
    //quantoR vai contar quantos foram removidos

    for(ind=0;ind<MAX;ind++){
        if(V1[ind]<0){
            tamanho++;
            x=ind;
            while(x<MAX){
                V1[x]=V1[x+1];
                x++;
            }
        if(V1[ind]<0)
            ind--;
        }
    }

    printf("\nVetor Sem números negativos\n");
    for(ind=0;ind<MAX-tamanho;ind++){
        printf("V1[%d]=%d \n", ind+1, V1[ind]);
    }

    for(ind=0;ind<MAX;ind++){
        for(ind2=0;ind2<MAX;ind2++){
            if(V1[ind]==V1[ind2]){
                x=ind;
                while(x<MAX){
                V1[x]=V1[x+1];
                x++;
                }
            }
        }
    }

    printf("\nVetor Sem negativos e números iguais \n");
    for(ind=0;ind<MAX;ind++){
        printf("V1[%d]=%d \n", ind+1, V1[ind]);
    }

}

/*. Dado um vetor A de 8 números reais, encontrar a maior diferença entre dois elementos consecutivos deste
vetor. Ao final, mostrar o valor da diferença.
*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 8

void diferenca(float V1[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float V[MAX];//tot vai receber quantos iguais tem
    int ind;

    printf("\n\t\tVetor REAL 1\n");
    for(ind=0;ind<MAX;ind++){
        printf("Digite um Número A ser guardado no V[%d]: ", ind+1);
        scanf("%f", &V[ind]);
    }

    diferenca(V);
}

void diferenca(float V1[]){
    int ind;
    float maiorDif;

    if(V1[0]>V1[1])
        maiorDif=V1[0]-V1[1];
    else
        maiorDif=V1[1]-V1[0];

    for(ind=0;ind<MAX;ind++){
        if(V1[ind]>V1[ind+1]&&V1[ind]-V1[ind+1]>maiorDif)
            maiorDif=V1[ind]-V1[ind+1];
        else if(V1[ind+1]>V1[ind]&&V1[ind+1]-V1[ind]>maiorDif)
            maiorDif=V1[ind+1]-V1[ind];
    }

    printf("\nVetor REAL\n");
    for(ind=0;ind<MAX;ind++){
        printf("VI[%d]=%.2f \n", ind+1, V1[ind]);
    }

    printf("\nO valor da maior difereça foi: %.2f", maiorDif);


}

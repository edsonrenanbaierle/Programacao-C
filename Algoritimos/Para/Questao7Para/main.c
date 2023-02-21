/*7. Nome: Edson Renan Baierle
Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de 15 pessoas. Faça um programa que
calcule e mostre:
a) a maior e a menor altura do grupo;
b) a média de altura das mulheres;
c) o número de homens;
d) o sexo da pessoa mais alta.
(considere 1 para Feminino e 2 para Masculino)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maltura(float altura1);
float menoraltura(float altura2);
float mediaM(float alturaM, int sexoM);
int numH(int sexoM);
int MouFalto(float alturaMouF, int sexo);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, sexo, y=1, Nhomens, MouF;
    float altura, maioralt, menoralt, media;

    for(x=1;x<=15;x++){
        printf("\nPessoa %d\n", y);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite 1 para Feminino e 2 para Masculino: ");
        scanf("%d", &sexo);
        maioralt=maltura(altura);
        menoralt=menoraltura(altura);
        media=mediaM(altura, sexo);
        Nhomens=numH(sexo);
        MouF=MouFalto(altura, sexo);
        y++;
    }
    printf("\nA maior altura - %.2f\n", maioralt);
    printf("A menor altura - %.2f\n", menoralt);
    printf("A média da altura das mulheres é - %.2f\n", media);
    printf("O número de homens é - %d\n", Nhomens);
    if(MouF==1)
        printf("Maior altura é de um Homem\n");
        else
            printf("Maior altura é de uma Mulher\n");
}
float maltura(float altura1){
    float static Malt=0;//Maior altura

    if(Malt<altura1)
        Malt=altura1;

    return Malt;
}

float menoraltura(float altura2){
    float static menaltura=999;

    if(menaltura>altura2)
        menaltura=altura2;

    return menaltura;
}

float mediaM(float alturaM, int sexoM){
    float mediaM;
    float static totalalt=0, x=0;//varivael x para saber quantas mulheres tem

    if(sexoM==2){
        totalalt=totalalt+alturaM;
        x++;
        mediaM=totalalt/x;
    }

    return mediaM;

}

int numH(int sexoM){
    int static x=0;

    if(sexoM==1)
        x++;

    return x;
}

int MouFalto(float alturaMouF, int sexo){
    float static Malt;//Maior altura

    if(Malt<alturaMouF)
        Malt=sexo;

    return Malt;

}


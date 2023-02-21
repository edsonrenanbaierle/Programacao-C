/*4. Nome: Edson Renan Baierle
Faça um algoritmo que receba a idade, a altura e o peso de 25 pessoas, calcule e mostre:
- a quantidade de pessoas com idade superior a 50 anos;
- a média das alturas das pessoas com idade entre 10 e 20 anos;
- a percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idadesup50(int idad);
float mediaalt(int idade2, float altura2);
float porcentagem(float quilos);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, x, w, numdapessoa=1;//w=recebe idade sup a 50
    float altura, peso, y, z;//y= mediaalt z=porcentagem

    for(x=1;x<=25;x++){
        printf("\n---Pessoa %d---", numdapessoa);
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu peso: ");
        scanf("%f", &peso);
        w=idadesup50(idade);
        y=mediaalt(idade, altura);
        z=porcentagem(peso);
        numdapessoa++;
    }

    printf("\nMaiores de 50: %d", w);
    printf("\nMédia da altura entre 10 e 20 anos é %.2f", y);
    printf("\nA porcentagem de pessoas menores de 40 quilos é: %2.f porcento", z);
}

int idadesup50(int idad){
    int static total=0;

    if(idad>50)
        total++;

    return total;
}

float mediaalt(int idade2, float altura2){
    float static totalalt, x=0; //x vai contar o número de pessoas
    float static mediaalt=0;

    if(idade2>=10 && idade2<=20){
        totalalt=altura2+totalalt;
        x++;
        mediaalt=totalalt/x;
    }

    return mediaalt;
}

float porcentagem(float quilos){
    float static pessoas=0, porcento=0;

    if(quilos<40){
        pessoas++;
        porcento=porcento+4;
    }

    return porcento;
}

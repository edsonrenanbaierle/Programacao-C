/*6. Nome: Edson Renan Baierle
Em um campeonato de futebol existem cinco times e cada time possui onze jogadores. Faça um algoritmo
que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
- a quantidade de jogadores com idade inferior a 18 anos;
- a média das idades dos jogadores de cada time;
- a média das alturas de todos os jogadores do campeonato.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcmenores(int idad);
float med1(float idade1);
float med2(float idade2);
float med3(float idade3);
float med4(float idade4);
float med5(float idade5);
float medalt(float altu);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, medidade1, medidade2, medidade3, medidade4, medidade5, mediaalt;
    int idade, x, y=1, calcmen;

    for(x=1;x<=11;x++){
        printf("\n---Time 1 Jogador  %d---\n", y);
        printf("Digite o peso do Jogador: ");
        scanf("%f", &peso);
        printf("Digite a altura do Jogador: ");
        scanf("%f", &altura);
        printf("Digite a idade do Jogador: ");
        scanf("%d", &idade);
        calcmen=calcmenores(idade);
        medidade1=med1(idade);
        mediaalt=medalt(altura);
        y++;
    }
        y=1;

        for(x=1;x<=11;x++){
        printf("\n---Time 2 Jogador  %d---\n", y);
        printf("Digite o peso do Jogador: ");
        scanf("%f", &peso);
        printf("Digite a altura do Jogador: ");
        scanf("%f", &altura);
        printf("Digite a idade do Jogador: ");
        scanf("%d", &idade);
        calcmen=calcmenores(idade);
        medidade2=med2(idade);
        mediaalt=medalt(altura);
        y++;
    }

        y=1;

        for(x=1;x<=11;x++){
        printf("\n---Time 3 Jogador  %d---\n", y);
        printf("Digite o peso do Jogador: ");
        scanf("%f", &peso);
        printf("Digite a altura do Jogador: ");
        scanf("%f", &altura);
        printf("Digite a idade do Jogador: ");
        scanf("%d", &idade);
        calcmen=calcmenores(idade);
        medidade3=med3(idade);
        mediaalt=medalt(altura);
        y++;
    }

        y=1;

        for(x=1;x<=11;x++){
        printf("\n---Time 4 Jogador  %d---\n", y);
        printf("Digite o peso do Jogador: ");
        scanf("%f", &peso);
        printf("Digite a altura do Jogador: ");
        scanf("%f", &altura);
        printf("Digite a idade do Jogador: ");
        scanf("%d", &idade);
        calcmen=calcmenores(idade);
        medidade4=med4(idade);
        mediaalt=medalt(altura);
        y++;
    }

        y=1;

        for(x=1;x<=11;x++){
        printf("\n---Time 5 Jogador  %d---\n", y);
        printf("Digite o peso do Jogador: ");
        scanf("%f", &peso);
        printf("Digite a altura do Jogador: ");
        scanf("%f", &altura);
        printf("Digite a idade do Jogador: ");
        scanf("%d", &idade);
        calcmen=calcmenores(idade);
        medidade5=med5(idade);
        mediaalt=medalt(altura);
        y++;
    }

    printf("Quantidade menores de 18 - %d\n", calcmen);
    printf("A média da idade do time 1 - %.2f\n", medidade1);
    printf("A média da idade do time 2 - %.2f\n", medidade2);
    printf("A média da idade do time 3 - %.2f\n", medidade3);
    printf("A média da idade do time 4 - %.2f\n", medidade4);
    printf("A média da idade do time 5 - %.2f\n", medidade5);
    printf("A média da altura dos 5 times - %.2f", mediaalt);
}

int calcmenores(int idad){
    int static quant=0;

    if(idad<18)
        quant++;

    return quant;

}

float med1(float idade1){
    float static total=0;
    float media;

    total=total+idade1;
    media=total/11;

    return media;
}

float med2(float idade2){
    float static total=0;
    float media;

    total=total+idade2;
    media=total/11;

    return media;
}

float med3(float idade3){
    float static total=0;
    float media;

    total=total+idade3;
    media=total/11;

    return media;
}

float med4(float idade4){
    float static total=0;
    float media;

    total=total+idade4;
    media=total/11;

    return media;
}

float med5(float idade5){
    float static total=0;
    float media;

    total=total+idade5;
    media=total/11;

    return media;
}

float medalt(float altu){
    float static totalt=0;
    float media;

    totalt=totalt+altu;
    media=totalt/55;

    return media;
}





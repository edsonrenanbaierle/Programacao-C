/*Edson Renan Baierle
6. Faça um programa que leia um código (1, 2, 3 ou 4) e dois valores do tipo inteiro, calcula e fornece:
– A adição dos números para código =1
– A subtração dos números para código =2
– A multiplicação dos números para código =3
– A divisão dos números para código = 4.
Você deve criar uma função para cada operação e essa função deve retornar o resultado para a função
principal.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculadora(int opt);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int c, X; //c= código
    while(c!=5){

    setlocale(LC_ALL,"Portuguese");
    printf("\nDigite 1 para adição\nDigite 2 para subtração\nDigite 3 para multiplicação\nDigite 4 para divisão\nDigite 5 para sair\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &c);

    X=calculadora(c);

    if(c==1)
        printf("\nA soma entre os dois números foi de: %d\n", X);
        else if(c==2)
            printf("\nA subtração entre os dois números foi de: %d", X);
            else if(c==3)
                printf("\nA multiplicação entre os dois números foi de: %d\n", X);
                else if(c==4)
                    printf("\nA divisão entre os dois números foi de: %d", X);
                    else if(c==5)
                         printf("Obrigado por utilizar o programa!\n");
    }
}

int calculadora(int opt){
    int n1, n2, s;

    if(opt==1){
       printf("\nDigite o primeiro número: ");
       scanf("%d", &n1);
       printf("Digite o segundo número: ");
       scanf("%d", &n2);
       s=n1+n2;
    }
        else if(opt==2){
            printf("\nDigite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
            s=n1-n2;
        }
            else if(opt==3){
                printf("\nDigite o primeiro número: ");
                scanf("%d", &n1);
                printf("Digite o segundo número: ");
                scanf("%d", &n2);
                s=n1*n2;
            }
                else if(opt==4){
                   printf("\nDigite o primeiro número: ");
                   scanf("%d", &n1);
                   printf("Digite o segundo número: ");
                   scanf("%d", &n2);
                    s=n1/n2;
                    }
        return s;

}



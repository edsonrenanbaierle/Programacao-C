/*Edson Renan Baierle
6. Fa�a um programa que leia um c�digo (1, 2, 3 ou 4) e dois valores do tipo inteiro, calcula e fornece:
� A adi��o dos n�meros para c�digo =1
� A subtra��o dos n�meros para c�digo =2
� A multiplica��o dos n�meros para c�digo =3
� A divis�o dos n�meros para c�digo = 4.
Voc� deve criar uma fun��o para cada opera��o e essa fun��o deve retornar o resultado para a fun��o
principal.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculadora(int opt);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int c, X; //c= c�digo
    while(c!=5){

    setlocale(LC_ALL,"Portuguese");
    printf("\nDigite 1 para adi��o\nDigite 2 para subtra��o\nDigite 3 para multiplica��o\nDigite 4 para divis�o\nDigite 5 para sair\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &c);

    X=calculadora(c);

    if(c==1)
        printf("\nA soma entre os dois n�meros foi de: %d\n", X);
        else if(c==2)
            printf("\nA subtra��o entre os dois n�meros foi de: %d", X);
            else if(c==3)
                printf("\nA multiplica��o entre os dois n�meros foi de: %d\n", X);
                else if(c==4)
                    printf("\nA divis�o entre os dois n�meros foi de: %d", X);
                    else if(c==5)
                         printf("Obrigado por utilizar o programa!\n");
    }
}

int calculadora(int opt){
    int n1, n2, s;

    if(opt==1){
       printf("\nDigite o primeiro n�mero: ");
       scanf("%d", &n1);
       printf("Digite o segundo n�mero: ");
       scanf("%d", &n2);
       s=n1+n2;
    }
        else if(opt==2){
            printf("\nDigite o primeiro n�mero: ");
            scanf("%d", &n1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &n2);
            s=n1-n2;
        }
            else if(opt==3){
                printf("\nDigite o primeiro n�mero: ");
                scanf("%d", &n1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &n2);
                s=n1*n2;
            }
                else if(opt==4){
                   printf("\nDigite o primeiro n�mero: ");
                   scanf("%d", &n1);
                   printf("Digite o segundo n�mero: ");
                   scanf("%d", &n2);
                    s=n1/n2;
                    }
        return s;

}



/*8. Nome: Edson Renan Baierle
Fa�a um algoritmo que l� um c�digo (1, 2, 3 ou 4) e dois valores do tipo inteiro, calcula e
fornece:
� A adi��o dos n�meros para c�digo =1
� A subtra��o dos n�meros para c�digo =2
� A multiplica��o dos n�meros para c�digo =3
� A divis�o dos n�meros para c�digo = 4.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int c, n1, n2, s; //c= c�digo n1, n2=numero1 e numero2 s=soma
    while(c!=5){

    setlocale(LC_ALL,"Portuguese");
    printf("\nDigite 1 para adi��o\nDigite 2 para subtra��o\nDigite 3 para multiplica��o\nDigite 4 para divis�o\nDigite 5 para sair\n");
    scanf("%d", &c);

    if(c==1){
       printf("Digite o primeiro n�mero: ");
       scanf("%d", &n1);
       printf("\nDigite o segundo n�mero: ");
       scanf("%d", &n2);
       s=n1+n2;
       printf("\nA soma entre os dois n�meros foi de: %d\n", s);
    }
        else if(c==2){
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo n�mero: ");
            scanf("%d", &n2);
            s=n1-n2;
            printf("\nA subtra��o entre %d", n1);
            printf("-%d", n2);
            printf(" foi= %d\n", s);
        }
            else if(c==3){
                printf("Digite o primeiro n�mero: ");
                scanf("%d", &n1);
                printf("\nDigite o segundo n�mero: ");
                scanf("%d", &n2);
                s=n1*n2;
                printf("\nA multiplica��o entre os dois n�meros foi de: %d\n", s);
            }
                else if(c==4){
                   printf("Digite o primeiro n�mero: ");
                   scanf("%d", &n1);
                   printf("\nDigite o segundo n�mero: ");
                   scanf("%d", &n2);
                    s=n1/n2;
                    printf("\nA divis�o entre %d", n1);
                    printf("/%d", n2);
                    printf(" foi= %d\n", s);
                    }
                    else if(c==5)
                        printf("Obrigado por utilizar o programa!\n");
    }
}

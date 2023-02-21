/*8. Nome: Edson Renan Baierle
Faça um algoritmo que lê um código (1, 2, 3 ou 4) e dois valores do tipo inteiro, calcula e
fornece:
– A adição dos números para código =1
– A subtração dos números para código =2
– A multiplicação dos números para código =3
– A divisão dos números para código = 4.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int c, n1, n2, s; //c= código n1, n2=numero1 e numero2 s=soma
    while(c!=5){

    setlocale(LC_ALL,"Portuguese");
    printf("\nDigite 1 para adição\nDigite 2 para subtração\nDigite 3 para multiplicação\nDigite 4 para divisão\nDigite 5 para sair\n");
    scanf("%d", &c);

    if(c==1){
       printf("Digite o primeiro número: ");
       scanf("%d", &n1);
       printf("\nDigite o segundo número: ");
       scanf("%d", &n2);
       s=n1+n2;
       printf("\nA soma entre os dois números foi de: %d\n", s);
    }
        else if(c==2){
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo número: ");
            scanf("%d", &n2);
            s=n1-n2;
            printf("\nA subtração entre %d", n1);
            printf("-%d", n2);
            printf(" foi= %d\n", s);
        }
            else if(c==3){
                printf("Digite o primeiro número: ");
                scanf("%d", &n1);
                printf("\nDigite o segundo número: ");
                scanf("%d", &n2);
                s=n1*n2;
                printf("\nA multiplicação entre os dois números foi de: %d\n", s);
            }
                else if(c==4){
                   printf("Digite o primeiro número: ");
                   scanf("%d", &n1);
                   printf("\nDigite o segundo número: ");
                   scanf("%d", &n2);
                    s=n1/n2;
                    printf("\nA divisão entre %d", n1);
                    printf("/%d", n2);
                    printf(" foi= %d\n", s);
                    }
                    else if(c==5)
                        printf("Obrigado por utilizar o programa!\n");
    }
}

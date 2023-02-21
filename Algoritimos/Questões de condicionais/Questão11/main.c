/*Nome: Edson Renan Baierle
11. Escreva um algoritmo que leia um valor referente a dinheiro (por exemplo, R$540.00) e calcula
qual o menor número possível de notas de 50.00, 10.00, 5.00 e 1.00 reais em que o valor lido pode
ser decomposto. O algoritmo deverá fornecer o valor lido e a relação de notas necessárias.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int din, resto, c50, c10, c5, c1;

    printf("Qual o valor que deseja decompor: ");
    scanf("%d", &din);

    if(din>=50){
        c50=din/50;
        resto=din%50;
        printf("R$50 notas usada: %d\n", c50);
        printf("Restou: %d\n", resto);
    }
        if(resto>=10){
            c10=resto/10;
            resto=resto%10;
            printf("R$10 notas usada: %d\n", c10);
            printf("Restou: %d\n", resto);
            }
            if(resto>=5){
                c5=resto/5;
                resto=resto%5;
                printf("R$5 notas usada: %d\n", c5);
                printf("Restou: %d\n", resto);
                }
                if(resto>=1){
                c1=resto/1;
                resto=resto%1;
                printf("R$1 notas usada: %d\n", c1);
                printf("Restou: %d\n", resto);
                }

                printf("\nDe R$50 foram utilizadas ao total %d\n", c50);
                printf("De R$10 foram utilizadas ao total %d\n", c10);
                printf("De R$5 foram utilizadas ao total %d\n", c5);
                printf("De R$1 foram utilizadas ao total %d\n", c1);

}

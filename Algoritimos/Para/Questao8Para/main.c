/*8. Nome: Edson Renan Baierle
Faça um algoritmo que receba um número inteiro maior que 1, verifique se o número fornecido é primo ou
não e mostre mensagem de número primo ou de número não primo. Um número é primo quando é divisível
apenas por 1 e por ele mesmo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void primoouN(int n);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int num, x;

   for(x=1;x<=5;x++){
   printf("Digite um número inteiro acima de 1: ");
   scanf("%d", &num);
   primoouN(num);
   }
}

void primoouN(int n){
    int x, y=0;

    for(x=1;x<=n;x++){
        if(n%x==0)
            y++;
    }

    if(y==2)
        printf("Número PRIMO!\n");
        else
            printf("O Número não é primo\n");
}

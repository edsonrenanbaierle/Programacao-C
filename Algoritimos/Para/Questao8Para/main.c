/*8. Nome: Edson Renan Baierle
Fa�a um algoritmo que receba um n�mero inteiro maior que 1, verifique se o n�mero fornecido � primo ou
n�o e mostre mensagem de n�mero primo ou de n�mero n�o primo. Um n�mero � primo quando � divis�vel
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
   printf("Digite um n�mero inteiro acima de 1: ");
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
        printf("N�mero PRIMO!\n");
        else
            printf("O N�mero n�o � primo\n");
}

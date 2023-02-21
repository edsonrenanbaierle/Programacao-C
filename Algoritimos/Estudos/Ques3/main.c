/*4. Faça um algoritmo que calcule a média aritmética de todos os números pares que forem fornecidos pelo
usuário. O valor de finalização deve ser a entrada do número zero. O usuário pode entrar com números ímpares,
mas estes não serão acumulados.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int media_pares(int numero);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num=1, media;

    while(num!=0){
        printf("\nDigite um número inteiro: ");
        scanf("%d", &num);
        media=media_pares(num);
    }
    printf("\nA média dos números pares é: %d", media);

}

int media_pares(int numero){
    static int total=0, quantParaes=0;
    static int mediaP;

    if(numero%2==0&&numero!=0){
        total=total+numero;
        quantParaes++;
        mediaP=total/quantParaes;
    }


    return mediaP;
}

/*4. Fa�a um algoritmo que calcule a m�dia aritm�tica de todos os n�meros pares que forem fornecidos pelo
usu�rio. O valor de finaliza��o deve ser a entrada do n�mero zero. O usu�rio pode entrar com n�meros �mpares,
mas estes n�o ser�o acumulados.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int media_pares(int numero);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num=1, media;

    while(num!=0){
        printf("\nDigite um n�mero inteiro: ");
        scanf("%d", &num);
        media=media_pares(num);
    }
    printf("\nA m�dia dos n�meros pares �: %d", media);

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

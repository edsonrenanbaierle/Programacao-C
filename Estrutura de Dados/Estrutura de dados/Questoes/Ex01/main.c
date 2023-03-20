/*1. Considere a existência de uma fila simples sequencial, com valores armazenados. Escreva um
algoritmo que inverta a fila (os valores armazenados nela), mantendo os valores em uma fila.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int V[5], IF, FF, LI=0, LS=4, op;
    int VI[5], IFI, FFI, LII=0, LSI=4;

    IF=FF=LI-1;
    IFI=FFI=LII-1;

    printf("\nDigite 1 para inserir o número inteiro na Fila");
    printf("\nDigite 2 para inverter a Fila");
    printf("\nDigite 3 para consultar o inicio da Fila");
    printf("\nDigite 4 para sair");
    printf("\nDigite sua escolha: ");
    scanf("%d", &op);

    while(op!=4){
        if(op==1){
            if((FF!=IF-1)&&((IF!=LI)||(FF!=LS))){//VERIFICAR SE JA INICIALIZOU A FILA E SE TEM ESPAÇO NO FIM OU NO INICIO DA FILA
                if(IF==LI-1)//verifica se está sem nodo na fila
                    IF=FF=LI;//caso esteja sem nodo na fila ele vai colocar ambos if e ff na posição 0 para \acrescentar o número
                    else if(FF==LS)//final da lista igual o final do arranjpo
                        FF=LI;//adiciona no inicio e faz a volta ao mesmo tempo permitindo o lupin
                        else
                            FF++;//inseri no fim

                        printf("\nQual o número inteiro que deseja inserir na Fila: ");
                        scanf("%d", &V[FF]);
                        printf("\nSucesso ao incerir o número inteiro na fila!!\n");
            }
                else
                    printf("\nA Fila se apresenta cheia!!\n");
        }

        if(op==2){
            while((FF!=IF-1)&&((IF!=LI)||(FF!=LS))){
                if(IFI==LII-1){
                    IFI=FFI=LII;
                    VI[FFI]=V[FF];
                    FF--;
                    printf("\nSucesso ao inverter o número\n");
                }
                else{
                    FFI++;
                    VI[FFI]=V[FF];
                    FF--;
                    printf("\nSucesso ao inverter o número\n");
                }
            }
            while((FFI!=IFI-1)&&((IFI!=LII)||(FFI!=LSI))){
                if(FFI!=IFI-1){
                    FF++;
                    V[FF]=VI[IFI];
                    IFI++;;
                }
                    else{
                        IF=FF=LI;
                        V[FF]=VI[IFI];
                        IFI++;
                    }
                }
        }


        if(op==3){
            printf("\nO número no ínicio da Fila é: %d", V[IF]);
            printf("\nO número no ínicio da Fila é: %d\n", V[FF]);
        }


        printf("\nDigite 1 para inserir na Fila");
        printf("\nDigite 2 para inverter a Fila");
        printf("\nDigite 3 para consultar o inicio da Fila");
        printf("\nDigite 4 para sair");
        printf("\nDigite sua escolha: ");
        scanf("%d", &op);
    }

}


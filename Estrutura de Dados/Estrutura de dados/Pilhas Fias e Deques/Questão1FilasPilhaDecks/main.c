/*1. Fa�a um Algoritmo, em pseudoc�digo, que leia um conjunto de valores inteiros e
armazene estes valores em duas pilhas, uma para valores positivos, e outra para
valores negativos. Em caso de overflow de alguma das pilhas, deve ser emitida uma
mensagem.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int info, Pilha[5], base=0, limite=4, topo, opt, Pilhan[5], basen=0, limiten=4, topon;

    topo=base-1;
    topon=basen-1;

    while(opt!=5){
        printf("\nDigite 1 para adicionar um nodo a pilha.");
        printf("\nDigite 2 para remover um nodo do topo da pilha POSITIVA.");
        printf("\nDigite 3 para remover um nodo do topo da pilha NEGATIVA.");
        printf("\nDigite 4 para vizulizar o topo da pilha.");
        printf("\nDigite 5 para sair.");
        printf("\nDigite a op��o desejadasa: ");
        scanf("%d", &opt);

        if(opt==1){
        printf("\nDigite o valor inteiro que deseja armazenar na pilha: ");
        scanf("%d", &info);
        }
            //Pilha positiva
            if(info>0){
                if(opt==1){
                    if(topo<limite){
                        topo++;
                        Pilha[topo]=info;
                        printf("\nInser��o ocorrida com sucesso!\n");
                    }
                        else
                            printf("\nImposs�vel realizar a inser��o!\n");
                }
                if(opt==2){
                    if(topo>=base){
                        topo--;
                        printf("\nRemo��o realizada com sucesso!\n");
                    }
                        else
                            printf("\nImposs�vel realizar remo��o!\n");
                }
                if(opt==4){
                    if(topo>=base){
                        printf("----PILHA POSITIVA----");
                        printf("\nO n�mero do topo �: %d\n", Pilha[topo]);
                    }
                }
            }

            //PILHA NEGATIVA
            if(info<0){
                if(opt==1){
                    if(topon<limiten){
                        topon++;
                        Pilhan[topon]=info;
                        printf("\nInser��o ocorrida com sucesso!\n");
                    }
                        else
                            printf("\nImposs�vel realizar a inser��o!\n");
                }
                if(opt==3){
                    if(topon>=basen){
                        topo--;
                        printf("\nRemo��o realizada com sucesso!\n");
                    }
                        else
                            printf("\nImposs�vel realizar remo��o!\n");
                }
                if(opt==4){
                    if(topon>=basen){
                        printf("----PILHA NEGATIVA----");
                        printf("\nO n�mero do topo �: %d\n", Pilhan[topon]);
                    }
                }
            }

        if(opt==5)
            printf("\nObrigado por utilizar o programa!");
    }

}

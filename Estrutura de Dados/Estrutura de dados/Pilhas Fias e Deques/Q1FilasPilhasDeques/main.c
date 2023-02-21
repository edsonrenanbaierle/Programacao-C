/*1. Faça um Algoritmo, em pseudocódigo, que leia um conjunto de valores inteiros e
armazene estes valores em duas pilhas, uma para valores positivos, e outra para
valores negativos. Em caso de overflow de alguma das pilhas, deve ser emitida uma
mensagem.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Pilha[5], topo, limite=4, base=0, info, opt, Pilhan[5], topon, limiten=4, basen=0;

    topo=base-1;
    topon=basen-1;

    while(opt!=2){
    printf("\nDigite a infrmação que deseja adicionar na pilha: ");
    scanf("%d", &info);

    if(info>0){
        if(topo<limite){
            topo=topo+1;
            Pilha[topo]=info;
            printf("\nSucesso a incerção do nodo na PILHA POSITIVA!\n");
        }
            else
                printf("\nNão é possível a incerção do nodo na PILHA POSITIVA!");
    }

    if(info<0){
        if(topon<limiten){
            topon=topon+1;
            Pilhan[topon]=info;
            printf("\nSucesso a incerção do nodo na PILHA NEGATIVA!\n");
        }
            else
                printf("\nNão é possível a incerção do nodo na PILHA NEGATIVA!");
        }
    }
}

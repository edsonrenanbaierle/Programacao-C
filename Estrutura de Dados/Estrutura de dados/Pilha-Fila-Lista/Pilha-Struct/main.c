#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    struct jogador{//criação da struct
        int idade;
        int ncamiseta;
        char prim_nome[50];
    };
   setlocale(LC_ALL, "Portuguese");

   struct jogador jog[5];//criação do vetor
   int topo, base=0, lim=4, op;//topo da pilha, base da pilha, limite da pilha.

   topo=base-1;//criação da pilha

   printf("\nDigite 1 para adicionar a pilha.");
   printf("\nDigite 2 para remover da pilha.");
   printf("\nDigite 3 para consultar o topo da pilha.");
   printf("\nDigite 4 para sair.");
   printf("\nDigite sua escolha: ");
   scanf("%d", &op);

    while(op!=4){
   if(op==1){
        if(topo<lim){
            topo++;
            printf("\nDigite a idade do jogador: ");
            scanf("%d", &jog[topo].idade);
            printf("Digite o número da camiseta do jogador: ");
            scanf("%d", &jog[topo].ncamiseta);
            printf("Digite o primeiro nome do jogador: ");
            scanf("%s", &jog[topo].prim_nome);
            printf("\nSucesso da inserção no topo!\n");
        }
            else
                printf("\nImpossível a inserção das informações!!\n");
        }

        if(op==2){
            if(topo>=base){
                topo--;
                printf("\nSucesso ao remover as informações da PILHA!!\n");
            }
            else
                printf("\nImpossível a remoção por não existir informações na PILHA!!\n");
        }

        if(op==3){
            printf("\nA idade do jogador é: %d", jog[topo].idade);
            printf("\nO número da camiseta do jogador é: %d", jog[topo].ncamiseta);
            printf("\nO nome do jogador é: %s\n", jog[topo].prim_nome);
        }




    printf("\nDigite 1 para adicionar a pilha.");
    printf("\nDigite 2 para remover da pilha.");
    printf("\nDigite 3 para consultar o topo da pilha.");
    printf("\nDigite 4 para sair.");
    printf("\nDigite sua escolha: ");
    scanf("%d", &op);
    }
}

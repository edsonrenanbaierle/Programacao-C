/*3. Nome: Edson Renan Baierle
Fa�a um algoritmo que elimine todos os elementos �mpares de uma pilha sequencial.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

   setlocale(LC_ALL, "Portuguese");

   int V[5], topo, base=0, lim=4, op;//topo da pilha, base da pilha, limite da pilha.
   int VN[5], topon, basen=0;

   topo=base-1;//cria��o da pilha
   topon=basen-1;

   printf("\nDigite 1 para adicionar um n�mero a pilha.");
   printf("\nDigite 2 para eliminar os n�meros impares da pilha");
   printf("\nDigite 3 para consultar o topo da pilha.");
   printf("\nDigite 4 para sair.");
   printf("\nDigite sua escolha: ");
   scanf("%d", &op);

   while(op!=4){
        if(op==1){
            if(topo<lim){
                topo++;
                printf("\nDigite o n�mero que deseja adicionar na pilha: ");
                scanf("%d", &V[topo]);
                printf("\nN�mero adicionado com sucesso!!\n");
                }
                    else
                        printf("\nImposs�vel a inser��o das informa��es!!\n");
        }

        if(op==2){
                while(topo>=base){
                    if(V[topo]%2==0){
                        topon++;
                        VN[topon]=V[topo];
                        topo--;
                        }
                        else{
                            topo--;
                            printf("\nSucesso ao remover o n�mero �mpar!!\n");
                        }
                    }
                        while(topon>=basen){
                            topo++;
                            V[topo]=VN[topon];
                            topon--;
                        }

        }

        if(op==3){
            if(topo>=base){
                printf("\nO n�mero no topo �: %d\n", V[topo]);
                printf("\nO n�mero na base �: %d\n", V[base]);
            }
                else
                    printf("\nN�o existe nodos na pilha\n");
        }

   printf("\nDigite 1 para adicionar um n�mero a pilha.");
   printf("\nDigite 2 para eliminar os n�meros impares da pilha");
   printf("\nDigite 3 para consultar o topo da pilha.");
   printf("\nDigite 4 para sair.");
   printf("\nDigite sua escolha: ");
   scanf("%d", &op);
    }
}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Pilha[5], topo, limite=4, base=0, info, opt, valor;

    topo=base-1;

    while(opt!=4){
        printf("Digite 1 para adicionar a pilha.");
        printf("\nDigite 2 para remover o topo da pilha.");
        printf("\nDigite 3 para vizulizar o topo da pilha.");
        printf("\nDigite 4 para encerrar o programa.\n");
        printf("\nDigite sua escolha: ");
        scanf("%d", &opt);

        if(opt==1){
            printf("\nDigite a infrmação que deseja adicionar na pilha: ");
            scanf("%d", &info);
            if(topo<limite){
            topo=topo+1;
            Pilha[topo]=info;
            printf("\nSucesso a incerção do nodo na piha!\n");
        }
        else
            printf("\nNão é possível a incerção do nodo na pilha!\n");
        }

        if(opt==2){
            if(topo>=base){
                topo=topo-1;
                printf("\nRemoção realizada com sucesso!\n");
            }
            else
                printf("\nImpossível realizar a remoção!\n");
        }

        if(opt==3){
            if(topo>=base){
                valor=Pilha[topo];
                printf("\nO valor na posição topo é: %d\n", valor);
            }
            else
                printf("\nNão é possível a verificação por não existir nodo na pilha!\n");
        }

        if(opt==4)
            printf("\nObrigado pela utilização do programa!\n");

    }

}

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
            printf("\nDigite a infrma��o que deseja adicionar na pilha: ");
            scanf("%d", &info);
            if(topo<limite){
            topo=topo+1;
            Pilha[topo]=info;
            printf("\nSucesso a incer��o do nodo na piha!\n");
        }
        else
            printf("\nN�o � poss�vel a incer��o do nodo na pilha!\n");
        }

        if(opt==2){
            if(topo>=base){
                topo=topo-1;
                printf("\nRemo��o realizada com sucesso!\n");
            }
            else
                printf("\nImposs�vel realizar a remo��o!\n");
        }

        if(opt==3){
            if(topo>=base){
                valor=Pilha[topo];
                printf("\nO valor na posi��o topo �: %d\n", valor);
            }
            else
                printf("\nN�o � poss�vel a verifica��o por n�o existir nodo na pilha!\n");
        }

        if(opt==4)
            printf("\nObrigado pela utiliza��o do programa!\n");

    }

}

/*Nome: Edson Renan Baierle
4. Imagine um colecionador de vinhos que compra vinhos recentes e os guarda em uma imensurável
adega para envelhecerem, e que a cada ocasião especial abre sempre sua última aquisição (para
poupar os mais antigos). Construa um algoritmo que permita ao usuário a opção de incluir novos
vinhos na adega e a opção de informar o próximo vinho a ser aberto em uma ocasião especial. As
informações básicas que o registro de vinhos deve conter são: nome do vinho e safra.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    struct vinho{//criação da struct
        char n_vinho[50];
        int safra;
    };
   setlocale(LC_ALL, "Portuguese");

   struct vinho V[5];//criação do vetor
   int topo, base=0, lim=4, op, op2;//topo da pilha, base da pilha, limite da pilha.


   topo=base-1;//criação da pilha

   printf("\nDigite 1 adicionar um vinho a Adega.");
   printf("\nDigite 2 para ver a última aquisição da Adega.");
   printf("\nDigite 3 para sair.");
   printf("\nDigite sua escolha: ");
   scanf("%d", &op);

    while(op!=3){
   if(op==1){
        if(topo<lim){
            topo++;
            printf("\nADICIONE VINHO A ADEGA!!");
            printf("\nDigite o nome do vinho que deseja adicionar a Adega: ");
            scanf("%s", &V[topo].n_vinho);
            printf("Digite a safra do vinho: ");
            scanf("%d", &V[topo].safra);
            printf("\nADICIONADO COM SUCESSO!!\n");
        }
            else
                printf("\nA ADEGA ESTÁ CHEIA!!\n");
        }

        if(op==2){
            if(topo>=base){
                    printf("\nO PRÓXIMO VINHO A SER ABERTO!!\n");
                    printf("\nO VINHO: %s", V[topo].n_vinho);
                    printf("\nCOM A SAFRA DE: %d\n", V[topo].safra);
                    printf("\nDigite 1 caso Retirar o vinho da Adega");
                    printf("\nDigite 2 caso não abrir o vinho da Adega");
                    printf("\nDigite sua escolha: ");
                    scanf("%d", &op2);
                        if(op2==1){
                        topo--;
                        printf("\nREMOÇÃO DE VINHO DA ADEGA");
                        printf("\nSucesso ao remover O VINHO DA ADEGA!!\n");
                    }
                        else
                            printf("\nVinho não removido da adega!!\n");
                }
                    else
                        printf("\nA ADEGA ESTÁ VAZIA!!\n");
        }

   printf("\nDigite 1 adicionar um vinho a Adega.");
   printf("\nDigite 2 para ver a última aquisição da Adega.");
   printf("\nDigite 3 para sair.");
   printf("\nDigite sua escolha: ");
   scanf("%d", &op);
    }
}

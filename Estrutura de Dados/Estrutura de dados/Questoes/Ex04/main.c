/*Nome: Edson Renan Baierle
4. Imagine um colecionador de vinhos que compra vinhos recentes e os guarda em uma imensur�vel
adega para envelhecerem, e que a cada ocasi�o especial abre sempre sua �ltima aquisi��o (para
poupar os mais antigos). Construa um algoritmo que permita ao usu�rio a op��o de incluir novos
vinhos na adega e a op��o de informar o pr�ximo vinho a ser aberto em uma ocasi�o especial. As
informa��es b�sicas que o registro de vinhos deve conter s�o: nome do vinho e safra.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    struct vinho{//cria��o da struct
        char n_vinho[50];
        int safra;
    };
   setlocale(LC_ALL, "Portuguese");

   struct vinho V[5];//cria��o do vetor
   int topo, base=0, lim=4, op, op2;//topo da pilha, base da pilha, limite da pilha.


   topo=base-1;//cria��o da pilha

   printf("\nDigite 1 adicionar um vinho a Adega.");
   printf("\nDigite 2 para ver a �ltima aquisi��o da Adega.");
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
                printf("\nA ADEGA EST� CHEIA!!\n");
        }

        if(op==2){
            if(topo>=base){
                    printf("\nO PR�XIMO VINHO A SER ABERTO!!\n");
                    printf("\nO VINHO: %s", V[topo].n_vinho);
                    printf("\nCOM A SAFRA DE: %d\n", V[topo].safra);
                    printf("\nDigite 1 caso Retirar o vinho da Adega");
                    printf("\nDigite 2 caso n�o abrir o vinho da Adega");
                    printf("\nDigite sua escolha: ");
                    scanf("%d", &op2);
                        if(op2==1){
                        topo--;
                        printf("\nREMO��O DE VINHO DA ADEGA");
                        printf("\nSucesso ao remover O VINHO DA ADEGA!!\n");
                    }
                        else
                            printf("\nVinho n�o removido da adega!!\n");
                }
                    else
                        printf("\nA ADEGA EST� VAZIA!!\n");
        }

   printf("\nDigite 1 adicionar um vinho a Adega.");
   printf("\nDigite 2 para ver a �ltima aquisi��o da Adega.");
   printf("\nDigite 3 para sair.");
   printf("\nDigite sua escolha: ");
   scanf("%d", &op);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void op1 (int V1[]);
void op2 (int V1[]);
void op3 (int V1[], int V2[]);

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int V[5], topo, base=0, lim=4, op;
   int VN[5], topon, basen=0;
   int maior=0, menor=999, soma=0, x=0;
   float media;

   topo=base-1;
   topon=basen-1;

   printf("PILHA\n\n1 � Empilhar\n2 � Desempilhar\n3 � Maior, menor e m�dia aritm�ticas dos valores da Pilha\n4 � Sair\n\nDigite a op��o: ");
   scanf("%d", &op);

   while(op!=4){
        if(op==1){
           op1 (V);
        }

        if(op==2){
             op2 (V);
        }

        if(op==3){
            op3(V, VN);
        }
    printf("\n\nPILHA\n\n1 � Empilhar\n2 � Desempilhar\n3 � Maior, menor e m�dia aritm�ticas dos valores da Pilha\n4 � Sair\n\nDigite a op��o: ");
    scanf("%d", &op);
    }
}
void op1 (int V1[]){


    int top,limit=4,bas=0;



    if(top<limit){
                top++;
                printf("\nDigite o n�mero que deseja adicionar na pilha: ");
                scanf("%d", &V1[top]);
                printf("\nN�mero adicionado com sucesso!\n");
                }
                else
                    printf("\nImposs�vel realizar a inser��o das informa��es!\n");






}
void op2 (int V1[]){

   int top,limit=4,bas=0;
    int soma=0,x=0;

    if(top>=bas){
                soma=soma-V1[top];
                top--;
                x--;
                printf("\nInforma��o removida com sucesso.");
            }
            else
                printf("\nN�o foi poss�vel remover a informa��o. -> Pilha sequencial vazia.");





}
void op3 (int V1[], int V2[]){
    int topo1, base1=0, lim1=4;
   int topon, basen=0;
   int maior=0, menor=999, soma=0, x=0;
    float media;

    while(topo1>=base1){
                if(topo1>=base1){
                    topon++;
                    V2[topon]=V1[topo1];
                    soma=soma+V1[topo1];
                    x=x+1;
                    if(V1[topo1]>maior){
                        maior=V1[topo1];
                    }
                    if(V1[topo1]<menor){
                        menor=V1[topo1];
                        }
                    topo1--;
                    }
                    }
                while(topon>=basen){
                    topo1++;
                    V1[topo1]=V2[topon];
                    topon--;
                }
            media=soma/x;
            printf("\nA m�dia �: %.2f", media);
            printf("\nO maior �: %d", maior);
            printf("\nO menor �: %d", menor);
            maior = 0;






}

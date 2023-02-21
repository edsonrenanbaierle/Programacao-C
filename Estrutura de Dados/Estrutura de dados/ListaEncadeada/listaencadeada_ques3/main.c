//Nome: Edson Renan Baierle
//Verificar se está ordenada ou não

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct LISTA{
    int info;
    struct LISTA *prox;
}LISTA;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    LISTA *PtLista, *PtAnt, *PtNovo, *PtAux;
    int K, dados, op, nordenada=0;//cont conta o tamanho da lista, conttroca vai contar qnts troca ocorre

    //INICIALIZADOR
    PtLista=NULL;

    printf("\n---LISTA ENCADEADA---");
    printf("\nEscolha a opção: ");
    printf("\n1. ADICIONAR;");
    printf("\n2.VER SE ESTÁ OREDENADA");
    printf("\n3. SAIR");
    printf("\nDIGITE A OPÇÃO: ");
    scanf("%d", &op);

    while(op!=3){
        if(op==1){
            printf("\nDigite o número inteiro que deseja armazenar na lista: ");
            scanf("%d", &dados);
            printf("Digite a posição que deseja inserir na Lista: ");
            scanf("%d", &K);

            PtNovo=(LISTA*)malloc(sizeof(LISTA));
            if(PtNovo==NULL){
                printf("\nImpossível a inserção na Lista!");
            }
                else if((PtLista==NULL)&&(K!=1)||(K<1)){
                    free(PtNovo);
                    printf("\nImpossível adicionar a informação!!");
                }
                    else if(K==1){
                        PtNovo->info=dados;
                        PtNovo->prox=PtLista;
                        PtLista=PtNovo;
                        printf("\nSucesso ao adicionar a informação!\n");
                    }
             else{
                PtAnt=PtLista;
                while((PtAnt->prox!=NULL)&&(K>2)){
                    PtAnt=PtAnt->prox;
                    K--;
                }
                if(K>2){
                    free(PtNovo);
                    printf("\nImpossível incerir, pois digitou uma posição invalida!\n");
                }
                    else{
                        PtNovo->info=dados;
                        PtNovo->prox=PtAnt->prox;
                        PtAnt->prox=PtNovo;
                        printf("\nSucesso ao incerrir na posição!\n");
                    }
             }
        }

        if(op==2){
            PtAux=PtLista;
            while(PtAux->prox!=NULL){
                if(PtAux->info > PtAux->prox->info)
                    nordenada++;//soma 1 caso uma ordem ficar nao ordenada

                PtAux=PtAux->prox;
            }
            if(nordenada>=1)//se for maior ou igual a 1 significa q la no meio algo não estava ordenado
                printf("\nNão está ordenada!!\n");
            else
                printf("\nESTÁ ORDENADA!!\n");
        }


        printf("\n---LISTA ENCADEADA---");
        printf("\nEscolha a opção: ");
        printf("\n1. ADICIONAR;");
        printf("\n2.VER SE ESTÁ OREDENADA");
        printf("\n3. SAIR");
        printf("\nDIGITE A OPÇÃO: ");
        scanf("%d", &op);
    }
}

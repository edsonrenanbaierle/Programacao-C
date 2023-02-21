//Nome: Edson Renan Baierle
//Verificar se est� ordenada ou n�o

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
    printf("\nEscolha a op��o: ");
    printf("\n1. ADICIONAR;");
    printf("\n2.VER SE EST� OREDENADA");
    printf("\n3. SAIR");
    printf("\nDIGITE A OP��O: ");
    scanf("%d", &op);

    while(op!=3){
        if(op==1){
            printf("\nDigite o n�mero inteiro que deseja armazenar na lista: ");
            scanf("%d", &dados);
            printf("Digite a posi��o que deseja inserir na Lista: ");
            scanf("%d", &K);

            PtNovo=(LISTA*)malloc(sizeof(LISTA));
            if(PtNovo==NULL){
                printf("\nImposs�vel a inser��o na Lista!");
            }
                else if((PtLista==NULL)&&(K!=1)||(K<1)){
                    free(PtNovo);
                    printf("\nImposs�vel adicionar a informa��o!!");
                }
                    else if(K==1){
                        PtNovo->info=dados;
                        PtNovo->prox=PtLista;
                        PtLista=PtNovo;
                        printf("\nSucesso ao adicionar a informa��o!\n");
                    }
             else{
                PtAnt=PtLista;
                while((PtAnt->prox!=NULL)&&(K>2)){
                    PtAnt=PtAnt->prox;
                    K--;
                }
                if(K>2){
                    free(PtNovo);
                    printf("\nImposs�vel incerir, pois digitou uma posi��o invalida!\n");
                }
                    else{
                        PtNovo->info=dados;
                        PtNovo->prox=PtAnt->prox;
                        PtAnt->prox=PtNovo;
                        printf("\nSucesso ao incerrir na posi��o!\n");
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
            if(nordenada>=1)//se for maior ou igual a 1 significa q la no meio algo n�o estava ordenado
                printf("\nN�o est� ordenada!!\n");
            else
                printf("\nEST� ORDENADA!!\n");
        }


        printf("\n---LISTA ENCADEADA---");
        printf("\nEscolha a op��o: ");
        printf("\n1. ADICIONAR;");
        printf("\n2.VER SE EST� OREDENADA");
        printf("\n3. SAIR");
        printf("\nDIGITE A OP��O: ");
        scanf("%d", &op);
    }
}

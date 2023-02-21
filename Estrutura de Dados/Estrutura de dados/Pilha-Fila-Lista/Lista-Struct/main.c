#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    struct aluno{//cria��o da struct
        int matr;
        int celular;
        char prim_nome[50];
    };
    setlocale(LC_ALL, "Portuguese");

    struct aluno alunos[5];//cria��o do vetor
    int IL, FL, IA=0, FA=4, op, k, ind;//Inicio da lista, Final da lista, Inicio do arranjo, Final do arranjo


    IL=FL=IA-1;//cria��o da lista Seqquencial

    printf("\nDigite 1 para adicionar a lista.");
    printf("\nDigite 2 para remover da lista.");
    printf("\nDigite 3 para consultar a lista.");
    printf("\nDigite 4 para sair.");
    printf("\nDigite sua escolha: ");
    scanf("%d", &op);

    while(op!=4){

        if(op==1){
            printf("\nDigite a posi��o que deseja inserir o nodo na lista: ");
            scanf("%d", &k);

            if(((IA==IL && FA==FL)||(k > FL-IL+2)||(k<=0)||(IL==-1 && k!=1))){
                printf("\nImposs�vel inserir o nodo na LISTA!!\n");
        }
                if(!((IA==IL && FA==FL)||(k > FL-IL+2)||(k<=0)||(IL==-1 && k!=1)))
                    if(IL==-1)
                        IL=FL=IA;
                        else if(FL!=FA){//desloca nodos para cima
                            for(ind=FL;ind>=IL+k-1;ind--)
                                alunos[ind+1]=alunos[ind];

                            FL++;
                        }
                        else{//desloca nodos para baixo
                            for(ind=IL;ind<=IL+k-2;ind++)
                                alunos[ind-1]=alunos[ind];

                            IL--;
                    }
                printf("\nDigite o n�mero da matricula do aluno: ");
                scanf("%d", &alunos[IL+k-1].matr);
                printf("\nDigite o n�mero do celular do aluno: ");
                scanf("%d", &alunos[IL+k-1].celular);
                printf("\nDigite o primeiro nome do aluno: ");
                scanf("%s", &alunos[IL+k-1].prim_nome);
                printf("\nInforma��o inserida com sucesso!!\n");
                printf("\nSucesso da incer��o na LISTA!!");

                fflush(stdin);
            }



        if(op==2){
            printf("\nQual a posi��o que voc� deseja remover: ");
            scanf("%d", &k);
            if((k<=0)||(k>FL-IL+1))
                printf("\nImposs�vel realizar a remo��o!!\n");
                else{
                    for(ind=IL+k-1;ind<=FL-1;ind++)
                        alunos[ind]=alunos[ind+1];

                    FL--;

                    if(FL==IL-1)
                        IL=FL=-1;
                    printf("\nSucesso ao remover as informa��es!!\n");
                }
        }

        if(op==3){
                if(FL>=IL){
                    if(!((IA==IL && FA==FL)||(k > FL-IL+2)||(k<=0)||(IL==-1 && k!=1))){
                        for(ind=IL;ind<=FL;ind++){
                            printf("\nMATRICULA: %d",  alunos[ind].matr);
                            printf("\nCELULAR: %d", alunos[ind].celular);
                            printf("\nPRIMEIRO NOME: %s\n", alunos[ind].prim_nome);
                            }
                        }
                        else
                            printf("\nImposs�vel Consulta, pois n�o existe informa��es!!\n");
                }
        }


    printf("\nDigite 1 para adicionar a lista.");
    printf("\nDigite 2 para remover da lista.");
    printf("\nDigite 3 para consultar a lista.");
    printf("\nDigite 4 para sair.");
    printf("\nDigite sua escolha: ");
    scanf("%d", &op);
    }
}

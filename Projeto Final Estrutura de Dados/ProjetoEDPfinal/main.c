//Alunos: Edson Renan Baierle, Felipe Winkelmann Mueller e Iury da Silva.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<conio.h>

typedef struct
{
    char *coffee;
} categorias;

typedef struct No
{
    categorias perguntas;
    struct No *esquerda, *direita;
} No;

typedef struct
{
    No *Raiz;
} ArvoreDecisao;

int main()
{
    system("color 1F");
    setlocale(LC_ALL, "Portuguese");

    ArvoreDecisao *arvore;
    No *Novo;
    int option = 1, option2;

    //Pergunta da raiz:
    char perguntaRaiz1[] = "\nVocê prefere:\n1 - Café sem leite.\n2 - Café com leite.\nEscolha: ";

    //Perguntas e respostas da subárvore da esquerda:
    char perguntaEsquerda2[] = "\nVocê prefere:\n1 - Com água quente.\n2 - Sem Água quente.\nEscolha: ";
    char perguntaEsquerda3[] = "\nIndique a quantidade de café desejada:\n1 - Até 50ml.\n2 - De 50ml a 110ml?\nEscolha: ";
    char perguntaEsquerda4[] = "\nIndique a quantidade de café desejada:\n1 - Menos 50ml.\n2 - 50ml.\nEscolha: ";
    char perguntaEsquerda5[] = "\nVocê prefere:\n1 - Um aroma e sabor mais marcante?\n2 - Um sabor mais suave e delicado, com cheiro agradável?\nEscolha: ";
    char respostaEsquerda1[] = "\nO café ideal para você é o Café Carioca sem açucar!";
    char respostaEsquerda2[] = "\nO café ideal para você é o Café Longo sem açucar!!";
    char respostaEsquerda3[] = "\nOs cafés ideais para você são o Café Curto e o Café Ristretto sem açúcar!";
    char respostaEsquerda4[] = "\nO café ideal para você é o Café Expresso sem açúcar";
    char respostaEsquerda5[] = "\nO café ideal para você é o Café Filtrado sem açúcar";
    char respostaEsquerda6[] = "\nOs cafés ideais para você são o Café Curto e o Café Ristretto com açúcar!";
    char respostaEsquerda7[] = "\nO café ideal para você é o Café Expresso com açúcar";
    char respostaEsquerda8[] = "\nO café ideal para você é o Café Filtrado com açúcar";
    char respostaEsquerda9[] = "\nO café ideal para você é o Café Carioca com açucar!";
    char respostaEsquerda10[] = "\nO café ideal para você é o Café Longo! com açucar";


    //Perguntas e respostas da subárvore direita:
    char perguntaDireita2[]= "\nVocê prefere:\n1 - Sem espuma.\n2 - Com espuma.\nEscolha: ";
    char perguntaDireita3[]= "\nIndique a quantidade de café desejada:\n1 - 100ml.\n2 - Mais que 100ml.\nEscolha: ";
    char perguntaDireita4[]= "\nIndique a quantidade de café desejada:\n1 - 150ml a 180ml.\n2 - 200ml.\nEscolha: ";
    char respostaDireita1[]= "\nO café ideal para você é o Café Pingado sem açúcar!";
    char respostaDireita2[]= "\nO café ideal para você é o Café com leite sem açúcar!";
    char respostaDireita3[]= "\nOs cafés ideais para você são o Cappuccino Italino e o Café Latte sem açúcar!";
    char respostaDireita4[]= "\nO café ideal para você é o Café Mocha sem açúcar!";
    char respostaDireita5[]= "\nO café ideal para você é o Café Pingado com açúcar!";
    char respostaDireita6[]= "\nO café ideal para você é o Café com leite com açúcar!";
    char respostaDireita7[]= "\nOs cafés ideais para você são o Cappuccino Italino e o Café Latte com açúcar!";
    char respostaDireita8[]= "\nO café ideal para você é o Café Mocha com açúcar!";

    //Pergunta Geral
    char perguntaG[]= "\nVocê prefere:\n1 - Sem Açucar.\n2 - Com Açucar.\nEscolha: ";

    arvore = NULL;//inicializar a árvore

    while(option != 3)
    {
        printf("|Café Ocho|\n1 - Descubra qual café que combina melhor com você!\n2 - Informações.\n3 - Sair.\nDigite qual a opção que você deseja: ");
        scanf("%d", &option);
        switch(option)
        {
        case 1:
            //Raiz:
            arvore = (ArvoreDecisao*)malloc(sizeof(ArvoreDecisao));
            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaRaiz1;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz=Novo;

            //Subárvore da esquerda:
            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaEsquerda2;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaEsquerda3;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaEsquerda4;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda1;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->esquerda->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda9;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->esquerda->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda2;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->esquerda->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda10;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->esquerda->direita->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda3;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda6;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaEsquerda5;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda4;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda7;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda5;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaEsquerda8;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->esquerda->direita->direita->direita->direita=Novo;




            //Subárvore direia:
            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaDireita2;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaDireita3;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaDireita4;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita1;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->esquerda->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita5;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->esquerda->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita2;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->esquerda->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita6;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->esquerda->direita->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita3;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->direita->esquerda->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita7;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->direita->esquerda->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=perguntaG;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->direita->direita=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita4;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->direita->direita->esquerda=Novo;

            Novo = (No*)malloc(sizeof(No));
            Novo->perguntas.coffee=respostaDireita8;
            Novo->esquerda=NULL;
            Novo->direita=NULL;
            arvore->Raiz->direita->direita->direita->direita=Novo;

            while(arvore->Raiz->esquerda!=NULL && arvore->Raiz->direita!=NULL)
            {
                printf("%s", arvore->Raiz->perguntas.coffee);
                scanf("%d", &option2);
                if(option2 == 1)
                {
                    arvore->Raiz= arvore->Raiz->esquerda;
                }
                else if(option2 == 2)
                {
                    arvore->Raiz= arvore->Raiz->direita;
                }
                else
                {
                    printf("Opção inválida. Tente novamente!");
                    sleep(2);
                    system("cls");
                }
            }
            printf("\033[0;32m");//mudar cor da linha resposta
            printf("%s", arvore->Raiz->perguntas.coffee);
            break;
        case 2:
            printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("O projeto consiste em um Software de Cafeteria utilizando árvores de decisão para identificar o café ideal para o cliente, conforme os gostos do mesmo.\n\n");
            sleep(1);
            printf("O aplicativo Café Ocho inicia no nodo raiz que conterá uma pergunta na qual fará o direcionamento pela árvore binária através das respectivas sub-árvores, conforme os\n");
            printf("questionamentos forem sendo respondidos o algoritmo conduz o usuário à próxima perguntaque está na subárvore seguinte, no qual trará novos questionamentos, ao final o destino do\n");
            printf("usuário será os nodos folhas que irão apresentar a melhor categoria de café para o cliente.\n\n");
            sleep(1);
            printf("Desenvolvido pelos alunos: Edson Renan Baierle, Felipe Winkelmann Mueller e Iury da Silva.\n\n");
            sleep(1);
            printf("Disciplina: Estrutura de Dados e Programação.\n\n");
            sleep(1);
            printf("Universidade de Santa Cruz do Sul (UNISC)\n");
            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            sleep(20);
            break;
        }
        sleep(3);
        system("color 1F");
        system("cls");
    }
}


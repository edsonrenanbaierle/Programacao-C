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
    char perguntaRaiz1[] = "\nVoc� prefere:\n1 - Caf� sem leite.\n2 - Caf� com leite.\nEscolha: ";

    //Perguntas e respostas da sub�rvore da esquerda:
    char perguntaEsquerda2[] = "\nVoc� prefere:\n1 - Com �gua quente.\n2 - Sem �gua quente.\nEscolha: ";
    char perguntaEsquerda3[] = "\nIndique a quantidade de caf� desejada:\n1 - At� 50ml.\n2 - De 50ml a 110ml?\nEscolha: ";
    char perguntaEsquerda4[] = "\nIndique a quantidade de caf� desejada:\n1 - Menos 50ml.\n2 - 50ml.\nEscolha: ";
    char perguntaEsquerda5[] = "\nVoc� prefere:\n1 - Um aroma e sabor mais marcante?\n2 - Um sabor mais suave e delicado, com cheiro agrad�vel?\nEscolha: ";
    char respostaEsquerda1[] = "\nO caf� ideal para voc� � o Caf� Carioca sem a�ucar!";
    char respostaEsquerda2[] = "\nO caf� ideal para voc� � o Caf� Longo sem a�ucar!!";
    char respostaEsquerda3[] = "\nOs caf�s ideais para voc� s�o o Caf� Curto e o Caf� Ristretto sem a��car!";
    char respostaEsquerda4[] = "\nO caf� ideal para voc� � o Caf� Expresso sem a��car";
    char respostaEsquerda5[] = "\nO caf� ideal para voc� � o Caf� Filtrado sem a��car";
    char respostaEsquerda6[] = "\nOs caf�s ideais para voc� s�o o Caf� Curto e o Caf� Ristretto com a��car!";
    char respostaEsquerda7[] = "\nO caf� ideal para voc� � o Caf� Expresso com a��car";
    char respostaEsquerda8[] = "\nO caf� ideal para voc� � o Caf� Filtrado com a��car";
    char respostaEsquerda9[] = "\nO caf� ideal para voc� � o Caf� Carioca com a�ucar!";
    char respostaEsquerda10[] = "\nO caf� ideal para voc� � o Caf� Longo! com a�ucar";


    //Perguntas e respostas da sub�rvore direita:
    char perguntaDireita2[]= "\nVoc� prefere:\n1 - Sem espuma.\n2 - Com espuma.\nEscolha: ";
    char perguntaDireita3[]= "\nIndique a quantidade de caf� desejada:\n1 - 100ml.\n2 - Mais que 100ml.\nEscolha: ";
    char perguntaDireita4[]= "\nIndique a quantidade de caf� desejada:\n1 - 150ml a 180ml.\n2 - 200ml.\nEscolha: ";
    char respostaDireita1[]= "\nO caf� ideal para voc� � o Caf� Pingado sem a��car!";
    char respostaDireita2[]= "\nO caf� ideal para voc� � o Caf� com leite sem a��car!";
    char respostaDireita3[]= "\nOs caf�s ideais para voc� s�o o Cappuccino Italino e o Caf� Latte sem a��car!";
    char respostaDireita4[]= "\nO caf� ideal para voc� � o Caf� Mocha sem a��car!";
    char respostaDireita5[]= "\nO caf� ideal para voc� � o Caf� Pingado com a��car!";
    char respostaDireita6[]= "\nO caf� ideal para voc� � o Caf� com leite com a��car!";
    char respostaDireita7[]= "\nOs caf�s ideais para voc� s�o o Cappuccino Italino e o Caf� Latte com a��car!";
    char respostaDireita8[]= "\nO caf� ideal para voc� � o Caf� Mocha com a��car!";

    //Pergunta Geral
    char perguntaG[]= "\nVoc� prefere:\n1 - Sem A�ucar.\n2 - Com A�ucar.\nEscolha: ";

    arvore = NULL;//inicializar a �rvore

    while(option != 3)
    {
        printf("|Caf� Ocho|\n1 - Descubra qual caf� que combina melhor com voc�!\n2 - Informa��es.\n3 - Sair.\nDigite qual a op��o que voc� deseja: ");
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

            //Sub�rvore da esquerda:
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




            //Sub�rvore direia:
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
                    printf("Op��o inv�lida. Tente novamente!");
                    sleep(2);
                    system("cls");
                }
            }
            printf("\033[0;32m");//mudar cor da linha resposta
            printf("%s", arvore->Raiz->perguntas.coffee);
            break;
        case 2:
            printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("O projeto consiste em um Software de Cafeteria utilizando �rvores de decis�o para identificar o caf� ideal para o cliente, conforme os gostos do mesmo.\n\n");
            sleep(1);
            printf("O aplicativo Caf� Ocho inicia no nodo raiz que conter� uma pergunta na qual far� o direcionamento pela �rvore bin�ria atrav�s das respectivas sub-�rvores, conforme os\n");
            printf("questionamentos forem sendo respondidos o algoritmo conduz o usu�rio � pr�xima perguntaque est� na sub�rvore seguinte, no qual trar� novos questionamentos, ao final o destino do\n");
            printf("usu�rio ser� os nodos folhas que ir�o apresentar a melhor categoria de caf� para o cliente.\n\n");
            sleep(1);
            printf("Desenvolvido pelos alunos: Edson Renan Baierle, Felipe Winkelmann Mueller e Iury da Silva.\n\n");
            sleep(1);
            printf("Disciplina: Estrutura de Dados e Programa��o.\n\n");
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


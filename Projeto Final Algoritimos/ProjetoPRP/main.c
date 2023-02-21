//Nomes dos Integrantes: Edson Renan Baierle, Eduardo Gomes Machado, Iury da Silva, Laura Beatriz Lersch, Rodrigo dos Santos Mello
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 1
#define MAX2 10

struct cadastros//struct criada para cadastro de empresa
{
    char nome[50];
    char telefone[50];
};

//funções com retorno, que calculam o preço da obra
float fundacao(float padraos, float metrag, float piso, float Vpreco[], float Vporcento[]);
float estrutura(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[]);
float paredes(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[]);
float esquadrias(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[]);
float cobertura(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[]);
float revestimento(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[]);
float instalacoes(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[]);
float mao_obra(float valorFIM, float padraos,  float metrag, float piso, float Vpreco[], float Vporcent[]);

//funções sem retorno, que apresentam informações na tela para o usuário
void tutorial();
void consulta(struct cadastros cadastro[], int i);
void informacoes();

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char continuar='S', continuar2 = 's';
    int op=1, ind=0;
    float Vprecos[MAX], Vporcentagem[MAX2], metragem, pisos, padrao, valorTOT;
    float fundacaoP, estruturaP, paredesP, esquadriasP, coberturaP, revestimentoP, instalacoesP, mdobraP;
    struct cadastros cadastro[5];


    //Vetor para guardar as porcentagens utilizadas nos calcúlos
    Vporcentagem[0]=2.05 ;
    Vporcentagem[1]=3.05 ;
    Vporcentagem[2]=0.14 ;
    Vporcentagem[3]=0.15 ;
    Vporcentagem[4]=0.10 ;
    Vporcentagem[5]=0.09 ;
    Vporcentagem[6]=0.11 ;
    Vporcentagem[7]=0.21 ;
    Vporcentagem[8]=0.20 ;
    Vporcentagem[9]=0.30 ;


    printf("\n\n\t\t\t\t\t\tOrça Fácil-My Home\n");
    printf("\n\t\t\t\tOrçando sua casa de maneira fácil e descomplicada!\n");
    printf("\n\t\t\t\t\tPara mais informações acesse o tutorial.");
    while(continuar=='S' || continuar=='s')
    {
        printf("\n\n\t\t\t\t\t\tOrça Fácil-My Home\n");
        printf("\n1.TUTORIAL DO PROGRAMA");
        printf("\n2.CONSTRUA SUA CASA");
        printf("\n3.CADASTRE SUA EMPRESA");
        printf("\n4.CONSULTE ETAPAS");
        printf("\n5.INFORMAÇÕES");
        printf("\n6.SAIR");
        printf("\nOpção: ");
        scanf("%d", &op);

        switch(op)
        {
        case 1:
            tutorial();
            break;
        case 2:
            printf("\nQual a metragem quadrada desejada: ");
            scanf("%f", &metragem);
            printf("\nQuantos pisos você deseja, até 3 pisos: ");
            scanf("%f", &pisos);
            while(pisos>3 || pisos<1)//while utilizado para validação de valores (1 - 3)
            {
                system("cls");
                printf("\nDigite um valor válido!!\n");
                printf("\nQuantos pisos você deseja, até 3 pisos: ");
                scanf("%f", &pisos);

            }
            printf("\nVocê deseja qual padrão: ");
            printf("\n1.Baixo");
            printf("\n2.Médio");
            printf("\n3.Alto");
            printf("\nOpção desejada: ");
            scanf("%f", &padrao);
            while(padrao>3 || padrao<1)//while utilizado para validação de valores (1 - 3)
            {
                system("cls");
                printf("\nDigite um padrão válido!!\n");
                printf("\nVocê deseja qual padrão: ");
                printf("\n1.Baixo");
                printf("\n2.Médio");
                printf("\n3.Alto");
                printf("\nOpção desejada: ");
                scanf("%f", &padrao);

            }
            system("cls");
            Vprecos[0]=200001;//para forçar a entrada no while
            while(Vprecos[0]>200000)
            {
                system("cls");

                printf("\t\t\tTabela da construção civil por metro quadrado\n");
                printf("\t\t\t\t\nRegião Norte:\nRO: R$1467,30;  AC: R$1544,75; AM: R$1417,92;  RR: R$1472,05;  PA: R$1428,00;  AP: R$1387,77;  TO: R$1466,29;\n");
                printf("\t\t\t\t\nRegião Nordeste:\nMA: R$1443,88; BA: R$1457,59;  PI: R$1341,28; CE: R$1375,56;  RN: R$1289,58;  PB: R$1402,72;  PE: R$1348,90;\nAL: R$1323,30; SE: R$1311,77;\n");
                printf("\t\t\t\t\nRegião Centro-Oeste:\nMS: R$1501,78;  MT: R$1478,76;  GO: R$1504,06;  DF: R$1588,86;\n");
                printf("\t\t\t\t\nRegião Sudeste:\nMG: R$1675,46;  ES: R$1357,88;  RJ: R$1525,10;  SP: R$1566,60;\n");
                printf("\t\t\t\t\nRegião Sul:\nSC: R$1685,99;  RS: R$1486,92;  PR: R$1543,12;\n");
                printf("\nQual o valor do metro cúbico no seu estado:R$ ");
                scanf("%f", &Vprecos[0]);

                if(Vprecos[0]>200000)
                {
                    printf("\n\n\n\n\t\t\t\tO valor digitado ultrapassa os valores de mercado!!");
                    sleep(2);
                }
            }


            system("cls");
            printf("\t\t\tValor de sua casa!\n");
            sleep(1);
            fundacaoP=fundacao(padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Fundação: %.2f\n", fundacaoP);
            sleep(1);
            estruturaP=estrutura(padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Estrutura: %.2f\n", estruturaP);
            sleep(1);
            paredesP=paredes(padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Paredes: %.2f\n", paredesP);
            sleep(1);
            esquadriasP=esquadrias(padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Esquadrias: %.2f\n", esquadriasP);
            sleep(1);
            coberturaP=cobertura(padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Cobertura e Proteções: %.2f\n", coberturaP);
            sleep(1);
            revestimentoP=revestimento(padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Revestimento e Pintura: %.2f\n", revestimentoP);
            sleep(1);
            instalacoesP=instalacoes(padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Instalações: %.2f\n", instalacoesP);
            sleep(1);
            valorTOT=fundacaoP+estruturaP+paredesP+esquadriasP+coberturaP+revestimentoP+instalacoesP;
            mdobraP=mao_obra(valorTOT, padrao, metragem, pisos, Vprecos, Vporcentagem);
            printf("Mão de Obra: %.2f\n", mdobraP);


            valorTOT=valorTOT+mdobraP;//Mão de obra é calculado em cima do valor total, após isto sendo somando com o mesmo

            sleep(1);
            if(padrao==1)//Apenas para diferenciar Baixo/Médio/Alto padrão
            {
                printf("\nO valor total de sua casa ficou conforme %.2fm², %1.f piso/pisos", metragem, pisos);
                printf("\ne padrão Baixo ficou de: R$%.2f", valorTOT);
            }
            else if(padrao==2)
            {
                printf("\nO valor total de sua casa ficou conforme %.2fm², %1.f piso/pisos", metragem, pisos);
                printf("\ne padrão Médio ficou de: R$%.2f", valorTOT);
            }
            else
            {
                printf("\nO valor total de sua casa ficou conforme %.2fm², %1.f piso/pisos", metragem, pisos);
                printf("\ne padrão Alto ficou de: R$%.2f", valorTOT);
            }



            break;
        case 3:
            printf("\n1.Cadastre uma empresa.(limite de 5 empresas).");
            printf("\n2.Veja as empresas cadastradas.");
            printf("\nEscolha: ");
            scanf("%d", &op);

            if(op>2 || op<=0)
            {

                while(op>2 || op<=0) //ficar dando lopping até a pessoa digitar um número válido(1-2)
                {
                    system("cls");

                    printf("Digite um número válido");
                    printf("\n1.Cadastre uma empresa.(limite de 5 empresas).");
                    printf("\n2.Veja as empresas cadastradas.");
                    printf("\nEscolha: ");
                    scanf("%d", &op);
                }
            }
            if(op==1)
            {



                continuar2='s';//É utilizado para caso usuário digite não em continuar na primeira vez, consiga acessar a aba novamente

                while((continuar2 == 's' || continuar2 == 'S')&&(ind<=4))
                {
                    printf("\nDigite o nome da empresa: ");
                    scanf("%s", &cadastro[ind].nome);
                    printf("\nDigite o número de telefone da empresa: ");
                    scanf("%s", &cadastro[ind].telefone);
                    ind++;//contador

                    printf("\nVocê deseja inserir mais uma empresa?(S/N)\n>");
                    scanf("%s", &continuar2);

                    system("cls");
                }
                if(ind>4)
                    printf("\nVocê ja cadastrou 5 empresas!!");
            }

            else if(op==2)
            {
                consulta(cadastro, ind);
            }
            break;
        case 4:
            printf("\nQual a metragem quadrada desejada: ");
            scanf("%f", &metragem);
            printf("\nQuantos pisos você deseja, até 3 pisos: ");
            scanf("%f", &pisos);
            while(pisos>3 || pisos<1)
            {
                system("cls");
                printf("\nDigite um valor válido!!\n");
                printf("\nQuantos pisos você deseja, até 3 pisos: ");
                scanf("%f", &pisos);

            }
            printf("\nVocê deseja qual padrão: ");
            printf("\n1.Baixo");
            printf("\n2.Médio");
            printf("\n3.Alto");
            printf("\nOpção desejada: ");
            scanf("%f", &padrao);
            while(padrao>3 || padrao<1)
            {
                system("cls");
                printf("\nDigite um padrão válido!!\n");
                printf("\nVocê deseja qual padrão: ");
                printf("\n1.Baixo");
                printf("\n2.Médio");
                printf("\n3.Alto");
                printf("\nOpção desejada: ");
                scanf("%f", &padrao);

            }
            system("cls");
            printf("\t\t\tTabela da construção civil por metro quadrado\n");
            printf("\t\t\t\t\nRegião Norte:\nRO: R$1467,30;  AC: R$1544,75; AM: R$1417,92;  RR: R$1472,05;  PA: R$1428,00;  AP: R$1387,77;  TO: R$1466,29;\n");
            printf("\t\t\t\t\nRegião Nordeste:\nMA: R$1443,88; BA: R$1457,59;  PI: R$1341,28; CE: R$1375,56;  RN: R$1289,58;  PB: R$1402,72;  PE: R$1348,90;\nAL: R$1323,30; SE: R$1311,77;\n");
            printf("\t\t\t\t\nRegião Centro-Oeste:\nMS: R$1501,78;  MT: R$1478,76;  GO: R$1504,06;  DF: R$1588,86;\n");
            printf("\t\t\t\t\nRegião Sudeste:\nMG: R$1675,46;  ES: R$1357,88;  RJ: R$1525,10;  SP: R$1566,60;\n");
            printf("\t\t\t\t\nRegião Sul:\nSC: R$1685,99;  RS: R$1486,92;  PR: R$1543,12;\n");
            printf("\nQual o valor do metro cúbico no seu estado:R$ ");
            scanf("%f", &Vprecos[0]);
            system("cls");//limpa tela

            while(continuar=='S' || continuar=='s')//while utilizado caso deseje consultar novamente
            {
                printf("\nEscolha a Parte desejada:");
                printf("\n1. Fundação");
                printf("\n2. Estrutura");
                printf("\n3. Paredes");
                printf("\n4. Esquadrias");
                printf("\n5. Cobertura e Proteção");
                printf("\n6. Revestimento e Pintura");
                printf("\n7. Instalações");
                printf("\nDigite a opção desejada: ");
                scanf("%d", &op);

                if(op==1)
                {
                    fundacaoP=fundacao(padrao, metragem, pisos, Vprecos, Vporcentagem);
                    printf("\n\nPreço final da Fundação: R$%.2f\n", fundacaoP);
                }
                else if(op==2)
                {
                    estruturaP=estrutura(padrao, metragem, pisos, Vprecos, Vporcentagem);
                    printf("\n\nPreço final da Estrutura: R$%.2f\n", estruturaP);

                }
                else if(op==3)
                {
                    paredesP=paredes(padrao, metragem, pisos, Vprecos, Vporcentagem);
                    printf("\n\nPreço final da Parede: R$%.2f\n", paredesP);
                }
                else if(op==4)
                {
                    esquadriasP=esquadrias(padrao, metragem, pisos, Vprecos, Vporcentagem);
                    printf("\n\nPreço final das Esquadrias: R$%.2f\n", esquadriasP);

                }
                else if(op==5)
                {
                    coberturaP=cobertura(padrao, metragem, pisos, Vprecos, Vporcentagem);
                    printf("\n\nPreço final da Cobertura e Proteções: R$%.2f\n", coberturaP);
                }
                else if(op==6)
                {
                    revestimentoP=revestimento(padrao, metragem, pisos, Vprecos, Vporcentagem);
                    printf("\n\nPreço final do Revestimento e Pintura: R$%.2f\n", revestimentoP);
                }
                else if(op==7)
                {
                    instalacoesP=instalacoes(padrao, metragem, pisos, Vprecos, Vporcentagem);
                    printf("\n\nPreço final das Instalações: R$%.2f\n", instalacoesP);
                }
                else
                    printf("\nDigite um número válido (1 - 7)");

                printf("\n\nDeseja ver mais alguma parte de sua casa separadamente?");
                printf("\nDigite (S/N): ");
                scanf("%s", &continuar);
                sleep(1);//tempo de espera
                system("cls");
            }
            break;
        case 5:
            informacoes();
            break;
        case 6:
            printf("\nObrigado por utilizar o programa!");
            exit(1);//encerrar o programa
            break;
        default:
            printf("Digite um número válido(1 a 6)");
            break;
        }

        printf("\n\n\nDeseja continuar a utlizar o programa(S/N): ");
        scanf("%s", &continuar);
        system("cls");

    }
}

void tutorial() //tutorial do software
{

    system("cls");
    printf("\n\t\t\t\t  Bem Vindo ao tutorial do Orça Fácil-My Home");
    printf("\n\n Este Software será sobre orçamento residencial procurando facilitar o acesso à informação,");
    printf("\ndescomplicando a forma de entender sua obra. Sobre como funcionará o nosso programa: ");
    printf("\n\n*2-Construa sua casa!\n");
    printf("\n Nesta etapa será realizada coleta de informações, sendo efetuado um briefing onde você nos informará\nquais são seus desejos em relação à sua casa, e o programa entenderá quais são suas preferências para\nrealizar o orçamento em conformidade com as opções e suas expectativas.");
    printf("\n\n*3-Cadastro de Empresa\n");
    printf("\n Nesta etapa ocorre o cadastro de empresas e seus respectivos contatos.\n");
    printf("\n\n*4-Consulte Etapas!\n");
    printf("\n Neste menu você poderá consultar os preços envolvidos de cada etapa separadamente.(FUNDAÇÃO, ESTRUTURA,\nPAREDES, ESQUADRIAS, COBERTURA E PROTEÇÃO, REVESTIMENTO E PINTURA, INSTALAÇÕES E APARELHOS).");
    printf("\n\n*5-Informações!\n");
    printf("\n Dentro deste menu será mostrado descrição, objetivos, integrantes do grupo e data de desenvolvimento do\nsoftware.");
}

float fundacao(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[])//calculo da fundação
{
    float ValFundacao, calculoP;

    if(piso==1)
        calculoP=metrag*piso*Vpreco[0];
    else if(piso==2)
        calculoP=(metrag*piso*Vpreco[0]*Vporcent[0]);
    else if(piso==3)
        calculoP=(metrag*piso*Vpreco[0]*Vporcent[1]);



    if(padraos==1)
    {
        ValFundacao=calculoP*Vporcent[2];
    }
    else if(padraos==2)
    {
        ValFundacao=(calculoP*Vporcent[2])*1.2;
    }
    else if(padraos==3)
    {
        ValFundacao=(calculoP*Vporcent[2])*1.4;
    }


    return ValFundacao;
}

float estrutura(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[])//calcúlo estrutura
{
    float ValEstrutura, calculoP;

    calculoP=metrag*piso*Vpreco[0];//calculo utilizado de base em todas as funções com retorno

    if(padraos==1)
    {
        ValEstrutura=calculoP*Vporcent[3];
    }
    else if(padraos==2)
    {
        ValEstrutura=(calculoP*Vporcent[3])*1.2;
    }
    else if(padraos==3)
    {
        ValEstrutura=(calculoP*Vporcent[3])*1.4;
    }


    return ValEstrutura;
}

float paredes(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[])//calculo das paredes
{
    float ValParedes, calculoP;

    calculoP=metrag*piso*Vpreco[0];//calculo base

    if(padraos==1)
    {
        ValParedes=calculoP*Vporcent[4];
    }
    else if(padraos==2)
    {
        ValParedes=(calculoP*Vporcent[4])*1.2;
    }
    else if(padraos==3)
    {
        ValParedes=(calculoP*Vporcent[4])*1.4;
    }


    return ValParedes;
}

float esquadrias(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[])//calculo das esquadrias
{
    float ValEsqua, calculoP;

    calculoP=metrag*piso*Vpreco[0];//calculo base

    if(padraos==1)
    {
        ValEsqua=calculoP*Vporcent[5];
    }
    else if(padraos==2)
    {
        ValEsqua=(calculoP*Vporcent[5])*1.2;
    }
    else if(padraos==3)
    {
        ValEsqua=(calculoP*Vporcent[5])*1.4;
    }


    return ValEsqua;
}

float cobertura(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[])//calculo cobertura
{
    float ValCober, calculoP;

    calculoP=metrag*piso*Vpreco[0];//calculo base

    if(padraos==1)
    {
        ValCober=calculoP*Vporcent[6];
    }
    else if(padraos==2)
    {
        ValCober=(calculoP*Vporcent[6])*1.2;
    }
    else if(padraos==3)
    {
        ValCober=(calculoP*Vporcent[6])*1.4;
    }


    return ValCober;
}

float revestimento(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[])//calculo revestimento
{
    float ValRevest, calculoP;

    calculoP=metrag*piso*Vpreco[0];//calculo base

    if(padraos==1)
    {
        ValRevest=calculoP*Vporcent[7];
    }
    else if(padraos==2)
    {
        ValRevest=(calculoP*Vporcent[7])*1.2;
    }
    else if(padraos==3)
    {
        ValRevest=(calculoP*Vporcent[7])*1.4;
    }


    return ValRevest;
}

float instalacoes(float padraos, float metrag, float piso, float Vpreco[], float Vporcent[])//calculo instalações
{
    float ValInsta, calculoP;

    calculoP=metrag*piso*Vpreco[0];//calculo base

    if(padraos==1)
    {
        ValInsta=calculoP*Vporcent[8];
    }
    else if(padraos==2)
    {
        ValInsta=(calculoP*Vporcent[8])*1.2;
    }
    else if(padraos==3)
    {
        ValInsta=(calculoP*Vporcent[8])*1.4;
    }

    return ValInsta;
}

float mao_obra(float valorFIM, float padraos,  float metrag, float piso, float Vpreco[], float Vporcent[])//calculo mao de obra
{
    float valorMD;//valor da mao de obra

    valorMD=(valorFIM*Vporcent[9]);

    return valorMD;
}




void consulta(struct cadastros cadastro[], int i)//consulta de empresas cadastradas(i==ind, para saber o total de empresas cadastradas no momento)
{
    int ind;

    if(i==0)
    {
        printf("\n\nNão há nenhuma empresa cadastrada no momento!!");
    }
    else
    {
        for(ind=0; ind<i; ind++)
        {
            printf("\nEmpresa: %s", cadastro[ind].nome);
            printf("\nTelefone: %s", cadastro[ind].telefone);
            printf("\n\n");
        }
    }
}

void informacoes()
{

    system("cls");
    printf("\n* Descrição");
    printf("\n Nosso programa será sobre orçamento residencial procurando facilitar o acesso à informação,");
    printf("\najudando as pessoas a entenderem um pouco do processo da contrução de uma casa!");
    printf("\n Assim ajudando o usuário a ter uma ideia de valores do mercado, avaliando o orçamento necessário ");
    printf("\nem média para realizarem seu sonho de contruir uma casa.");
    printf("\n\n* Objetivo.");
    printf("\n Software que busca facilitar o acesso a informação descomplicando a forma de entender sua obra.");
    printf("\n\n* Data de Desenvolvimento");
    printf("\n\n17/11/2022 - Decisão do tema do projeto.");
    printf("\n20/11/2022 - Começo da construção do software.");
    printf("\n23/11/2022 - Descrição do projeto.");
    printf("\n24/11/2022 - Desenvolvimento do software.");
    printf("\n27/11/2022 - Desenvolvimento do software.");
    printf("\n28/11/2022 - Desenvolvimentos finais do software como melhora na indentação.");
    printf("\n29/11/2022 - Ajustes no código.");
    printf("\n\n* Integrantes");
    printf("\nEdson Renan Baierle, Eduardo Gomes Machado, Iury da Silva,\nLaura Beatriz Lersch, Rodrigo dos Santos Mello.");
}

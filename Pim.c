/*Sistema de bilhetagem para um teatro.
Fase inicial do projeto.
Created by: Filipe Sandes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void entrada1(int* ingresso, int opcao){

    printf("\t________________________________________________\n\n");
    printf("\t-Tem direito a Meia-entrada as seguintes op��es:\n");
    // Declarando op�oes
    printf("\t| [1] Crian�as entre 02 e 12 anos.\n");
    printf("\t| [2] Adultos a partir de 60 anos.\n");
    printf("\t| [3] Estudantes.\n");
    printf("\t| [4] Professores da rede P�blica de Ensino.\n");
    printf("\t| Caso n�o tenha direito a desconto, digite [5].\n");
    printf("\t________________________________________________\n");

    // Inicio do la�o de repeti�ao "Do / While" para op�oes INVALIDAS
    do{
    printf("\n\tInforme sua op��o: ");
    scanf("%d", &opcao);
    switch(opcao){      // "Switch case" para (opcao) digitada
        case 1:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tO Fantasma da �pera\n");
            printf("\tSab - 01 dec - 21h\n");
            printf("\tDesconto para Crian�as entre 02 e 12 anos.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t__________________________________________\n");
            break;
        case 2:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tO Fantasma da �pera\n");
            printf("\tSab - 01 dec - 21h\n");
            printf("\tDesconto para Adultos a partir de 60 anos.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t__________________________________________\n");
            break;
        case 3:
            system("cls");
            printf("\t_____________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tO Fantasma da �pera\n");
            printf("\tSab - 01 dec - 21h\n");
            printf("\tDesconto para Estudantes.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t_____________________________________\n");
            break;
        case 4:
            system("cls");
            printf("\t____________________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tO Fantasma da �pera\n");
            printf("\tSab - 01 dec - 21h\n");
            printf("\tDesconto para Professores da rede Publica de Ensino.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t____________________________________________________\n");
            break;
        case 5:
            system("cls");
            printf("\t_____________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tO Fantasma da �pera\n");
            printf("\tSab - 01 dec - 21h\n");
            printf("\tIgresso integral.\n");
            printf("\tO valor do ingresso: R$30,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t_____________________________________\n");
            break;
        default:
            printf("\tOp��o Invalida.");      // "Default" finalizando Switch case
        }
    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);     // "While" indicando quais op��es n�o ser�o repetidas.(Se op�ao invalida repete o la�o ate ser digitado uma op��o valida)
}
void entrada2(int* ingresso, int opcao){

    printf("\t________________________________________________\n\n");
    printf("\t-Tem direito a Meia-entrada as seguintes op��es:\n");
    // Declarando op�oes
    printf("\t| [1] Crian�as entre 02 e 12 anos.\n");
    printf("\t| [2] Adultos a partir de 60 anos.\n");
    printf("\t| [3] Estudantes.\n");
    printf("\t| [4] Professores da rede P�blica de Ensino.\n");
    printf("\t| Caso n�o tenha direito a desconto, digite [5].\n");
    printf("\t________________________________________________\n");

    // Inicio do la�o de repeti�ao "Do / While" para op�oes INVALIDAS
    do{
    printf("\n\tInforme sua op��o: ");
    scanf("%d", &opcao);
    switch(opcao){      // "Switch case" para (opcao) digitada
        case 1:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tDeath of a Salesman\n");
            printf("\tSab - 01 dec - 23h\n");
            printf("\tDesconto para Crian�as entre 02 e 12 anos.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t__________________________________________\n");
            break;
        case 2:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tDeath of a Salesman\n");
            printf("\tSab - 01 dec - 23h\n");
            printf("\tDesconto para Adultos a partir de 60 anos.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t__________________________________________\n");
            break;
        case 3:
            system("cls");
            printf("\t_____________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tDeath of a Salesman\n");
            printf("\tSab - 01 dec - 23h\n");
            printf("\tDesconto para Estudantes.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t_____________________________________\n");
            break;
        case 4:
            system("cls");
            printf("\t____________________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tDeath of a Salesman\n");
            printf("\tSab - 01 dec - 23h\n");
            printf("\tDesconto para Professores da rede Publica de Ensino.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t____________________________________________________\n");
            break;
        case 5:
            system("cls");
            printf("\t_____________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tDeath of a Salesman\n");
            printf("\tSab - 01 dec - 23h\n");
            printf("\tIgresso integral.\n");
            printf("\tO valor do ingresso: R$30,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t_____________________________________\n");
            break;
        default:
            printf("\tOp��o Invalida.");      // "Default" finalizando Switch case
        }
    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);     // "While" indicando quais op��es n�o ser�o repetidas.(Se op�ao invalida repete o la�o ate ser digitado uma op��o valida)
}
void entrada3(int* ingresso, int opcao){

    printf("\t________________________________________________\n\n");
    printf("\t-Tem direito a Meia-entrada as seguintes op��es:\n");
    // Declarando op�oes
    printf("\t| [1] Crian�as entre 02 e 12 anos.\n");
    printf("\t| [2] Adultos a partir de 60 anos.\n");
    printf("\t| [3] Estudantes.\n");
    printf("\t| [4] Professores da rede P�blica de Ensino.\n");
    printf("\t| Caso n�o tenha direito a desconto, digite [5].\n");
    printf("\t________________________________________________\n");

    // Inicio do la�o de repeti�ao "Do / While" para op�oes INVALIDAS
    do{
    printf("\n\tInforme sua op��o: ");
    scanf("%d", &opcao);
    switch(opcao){      // "Switch case" para (opcao) digitada
        case 1:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tMacbeth\n");
            printf("\tDom - 02 dec - 22h\n");
            printf("\tDesconto para Crian�as entre 02 e 12 anos.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t__________________________________________\n");
            break;
        case 2:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tMacbeth\n");
            printf("\tDom - 02 dec - 22h\n");
            printf("\tDesconto para Adultos a partir de 60 anos.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t__________________________________________\n");
            break;
        case 3:
            system("cls");
            printf("\t_____________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tMacbeth\n");
            printf("\tDom - 02 dec - 22h\n");
            printf("\tDesconto para Estudantes.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t_____________________________________\n");
            break;
        case 4:
            system("cls");
            printf("\t____________________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tMacbeth\n");
            printf("\tDom - 02 dec - 22h\n");
            printf("\tDesconto para Professores da rede Publica de Ensino.\n");
            printf("\tO valor do ingresso: R$15,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t____________________________________________________\n");
            break;
        case 5:
            system("cls");
            printf("\t_____________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tMacbeth\n");
            printf("\tDom - 02 dec - 22h\n");
            printf("\tIgresso integral.\n");
            printf("\tO valor do ingresso: R$30,00\n");
            printf("\tCOMPRA EFETUADA EM:\n\t%s  %s\n",__DATE__,__TIME__);
            printf("\t_____________________________________\n");
            break;
        default:
            printf("\tOp��o Invalida.");      // "Default" finalizando Switch case
        }
    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);     // "While" indicando quais op��es n�o ser�o repetidas.(Se op�ao invalida repete o la�o ate ser digitado uma op��o valida)
}
// Fun�ao principal
int main(){
setlocale(LC_ALL, "Portuguese");    //Para n�o ter erros de portugues


    int opcao;      // Variavel para op�oes
    int* ingresso;

    printf("\n\t---------------------------------\n");
    printf("\t--------- TEATRO VILLAR ---------\n");
    printf("\t---------------------------------\n\n\n");
    printf("\t_________________________________\n\n");
    printf("\t     | --PE�AS EM CARTAZ-- |\n\n");
    printf("\t| [1] O Fantasma da �pera \n");
    printf("\t| [2] Death of a Salesman \n");
    printf("\t| [3] Macbeth \n");
    printf("\t_________________________________\n");

    do{
    printf("\n\tInforme sua op��o: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
		system("cls");
		printf("\n\tPE�A TEATRAL\n");
		printf("\tO Fantasma da �pera\n");
		printf("\tSab - 01 dec - 21h\n");
		entrada1(ingresso, opcao);
		break;
		case 2:
		system("cls");
		printf("\n\tPE�A TEATRAL\n");
		printf("\tDeath of a Salesman\n");
		printf("\tSab - 01 dec - 23h\n");
		entrada2(ingresso, opcao);
		break;
		case 3:
		system("cls");
		printf("\n\tPE�A TEATRAL\n");
		printf("\tMacbeth\n");
		printf("\tDom - 02 dec - 22h\n");
		entrada3(ingresso, opcao);
		break;
        default:
            printf("\tOp��o Invalida!");
    }
    }while(opcao != 1 && opcao != 2 && opcao != 3);
return 0;
}


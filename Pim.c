/*Sistema de bilhetagem para um teatro.
Fase inicial do projeto.
Created by: Filipe Sandes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void entrada1(int* ingresso, int opcao){

    printf("\t________________________________________________\n\n");
    printf("\t-Op��es de ingrsso:\n");
    // Declarando op�oes
    printf("\t| [1] Inteira.\n");
    printf("\t| [2] Meia-Entrada*.\n");
    printf("\t| [3] Entrada Franca**.\n");
    printf("\t________________________________________________\n\n");
    printf("*Meia-Entrada: Crian�as de 02 a 12 anos, estudantes, adultos a partir de 60 anos e professores da rede p�blica de ensino\n");
    printf("**Entrada Franca: �s ter�as-feiras para crian�as carentes da rede p�blica de encino \n\n");
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
            printf("\tInteira.\n");
            printf("\tValor do ingresso: R$30,00\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            case 2:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tO Fantasma da �pera\n");
            printf("\tSab - 01 dec - 21h\n");
            printf("\tMeia-Eatrada.\n");
            printf("\tValor do ingresso: R$15,00\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            case 3:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tO Fantasma da �pera\n");
            printf("\tSab - 01 dec - 21h\n");
            printf("\tEntrada Franca.\n");
            printf("\tValor do ingresso: Gratuito\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            default:    // "Default" finalizando Switch case
                printf("\tOP��O INVALIDA!");}
}while(opcao != 1 && opcao != 2 && opcao != 3); // "While" indicando quais op��es n�o ser�o repetidas.(Se op�ao invalida repete o la�o ate ser digitado uma op��o valida)
}
void entrada2(int* ingresso, int opcao){

    printf("\t________________________________________________\n\n");
    printf("\t-Op��es de ingrsso:\n");
    // Declarando op�oes
    printf("\t| [1] Inteira.\n");
    printf("\t| [2] Meia-Entrada*.\n");
    printf("\t| [3] Entrada Franca**.\n");
    printf("\t________________________________________________\n\n");
    printf("*Meia-Entrada: Crian�as de 02 a 12 anos, estudantes, adultos a partir de 60 anos e professores da rede p�blica de ensino\n");
    printf("**Entrada Franca: �s ter�as-feiras para crian�as carentes da rede p�blica de encino \n\n");
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
            printf("\tInteira.\n");
            printf("\tValor do ingresso: R$30,00\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            case 2:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tDeath of a Salesman\n");
            printf("\tSab - 01 dec - 23h\n");
            printf("\tMeia-Eatrada.\n");
            printf("\tValor do ingresso: R$15,00\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            case 3:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tDeath of a Salesman\n");
            printf("\tSab - 01 dec - 23h\n");
            printf("\tEntrada Franca.\n");
            printf("\tValor do ingresso: Gratuito\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            default:    // "Default" finalizando Switch case
                printf("\tOP��O INVALIDA!");}
}while(opcao != 1 && opcao != 2 && opcao != 3); // "While" indicando quais op��es n�o ser�o repetidas.(Se op�ao invalida repete o la�o ate ser digitado uma op��o valida)
}
void entrada3(int* ingresso, int opcao){

    printf("\t________________________________________________\n\n");
    printf("\t-Op��es de ingrsso:\n");
    // Declarando op�oes
    printf("\t| [1] Inteira.\n");
    printf("\t| [2] Meia-Entrada*.\n");
    printf("\t| [3] Entrada Franca**.\n");
    printf("\t________________________________________________\n\n");
    printf("*Meia-Entrada: Crian�as de 02 a 12 anos, estudantes, adultos a partir de 60 anos e professores da rede p�blica de ensino\n");
    printf("**Entrada Franca: �s ter�as-feiras para crian�as carentes da rede p�blica de encino \n\n");
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
            printf("\tInteira.\n");
            printf("\tValor do ingresso: R$30,00\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            case 2:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tMacbeth\n");
            printf("\tDom - 02 dec - 22h\n");
            printf("\tMeia-Eatrada.\n");
            printf("\tValor do ingresso: R$15,00\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            case 3:
            system("cls");
            printf("\t__________________________________________\n");
            printf("\n\tPE�A TEATRAL\n");
            printf("\tMacbeth\n");
            printf("\tDom - 02 dec - 22h\n");
            printf("\tEntrada Franca.\n");
            printf("\tValor do ingresso: Gratuito\n");
            printf("\t__________________________________________\n\n");
            printf("\tDeseja confirmar a compra?\n\n\t[1] SIM\n\t[2] NAO\n\n");
            printf("\tOp��o escolhida: ");
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                printf("\n\tCOMPRA EFETUADA COM SUCESSO EM:\n\t%s  %s\n",__DATE__,__TIME__);
                printf("\t__________________________________________\n\n");
                break;
                case 2:
                printf("\n\tCOMPRA CANCELADA!\n");
                printf("\t__________________________________________\n\n");}
            break;
            default:    // "Default" finalizando Switch case
                printf("\tOP��O INVALIDA!");}
}while(opcao != 1 && opcao != 2 && opcao != 3); // "While" indicando quais op��es n�o ser�o repetidas.(Se op�ao invalida repete o la�o ate ser digitado uma op��o valida)
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


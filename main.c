#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
typedef struct data DATA;
struct data {
    int dia;
    int mes;
    int ano;
};
typedef struct paciente PACIENTE;
struct paciente {
    char nome[30];
    char cpf[15];
    char telefone[15];
    char endereco [40];
    DATA nascimento;
    char email[40];
    char datadiagnostico[15];
    char comorbidade[20];
};

void cabecalho();
void inserir();
int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do{
        cabecalho();
        printf("1 - Inserir Nome\n");
        printf("2 - Inserir CPF\n");
        printf("3 - Inserir Telefone\n");
        printf("4 - Inserir Endereco\n");
        printf("5 - Inserir Data de Nascimento\n");
        printf("6 - Inserir E-mail\n");
        printf("7 - Inserir Data do diagnóstico\n");
        printf("8 - Inserir Comorbidade\n");
        printf("9 - Sair\n\n");
        scanf("%d", opcao);

        switch(opcao){

        case 1:
            inserir();
        break;

        case 2:
        break;

        case 3:
        break;

        case 4:
        break;

        case 5:
        break;

        case 6:
        break;

        case 7:
        break;

        case 8:
        break;

        case 9:
            printf("Obrigado, até mais !!!!\n");
            getch();
        break;

        default:
            printf("Opção Inválida!\n");
            getch();
        break;










        }

    }while(opcao !=9);

}
void cabecalho(){
    system("cls");
    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("----------------------------------------------------------\n");
    printf("----------------------------------------------------------\n");
    printf("------**********CADASTRO DE PACIENTES**********-----------\n");
    printf("----------------------------------------------------------\n");
    printf("----------------------------------------------------------\n");
    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
}

void inserir(){
    FILE* arquivo;
    CONTATO ctt;

    arquivo = fopen("cadastro.txt", "ab");

    if(arquivo == NULL){
       printf ("PROBLEMAS NA ABERTURA DO CADASTRO!!!!\n");
       }
    else{
        do{
        cabecalho();
        fflush(stdin);
        printf("Digite o nome: ");
        gets(ctt.nome);


        fflush(stdin);
        printf("Digite o CPF: ");
        gets(ctt.cpf);

        fflush(stdin);
        printf("Digite o telefone: ");
        gets(ctt.telefone);

        fflush(stdin);
        printf("Digite o endereço: ");
        gets(ctt.endereco);

        printf("Digite data de nascimento: ");
        scanf("%d %d %d", &ctt.nasc.dia, &ctt.nasc.mes, &ctt.nasc.ano);

        fflush(stdin);
        printf("Digite o e-mail: ");
        gets(ctt.email);

        fflush(stdin);
        printf("Digite data de diagnóstico: ");
        gets(ctt.diagnostico);

        fwrite(&ctt, sizeof(CONTATO)), 1, arquivo);

        printf("Deseja continuar(s/n)?")

        }while(getche() == 's');
        fclose(arquivo);
    }

}




#include <stdio.h>

typedef struct 
{
    int dia, mes, ano;
    
} DATA;

typedef struct pessoa
{
    char nome[100];
    int idade;
    float salario;
    DATA dt_nasc;
} PESSOA;

void Ler(PESSOA *ptr)
{
    /*carrega a estrutura passada por parâmetro*/
    printf("Qual o Nome         :  "); gets(ptr->nome);
    printf("Qual a Idade        :  "); scanf("%d", &ptr->idade);
    printf("Qual o Salario      :  "); scanf("%f", &ptr->salario);
    printf("Qual a Datat. Nasc  :  ");
    scanf("%d %d %d", &ptr->dt_nasc.dia, &ptr->dt_nasc.mes, &ptr->dt_nasc.ano);
    printf("---------------------------------------\n");
}


/*Mostra a estrutura passada por parametro */
void Mostrar(PESSOA x)
{
    printf("Nome    : %s\n", x.nome);
    printf("Idade   : %d\n", x.idade);
    printf("Salario :%.2f\n", x.salario);
    printf("Dt. Nasc:%d/%d/%d\n", x.dt_nasc.dia, x.dt_nasc.mes, x.dt_nasc.ano);
    printf("---------------------------------------\n");
}

main()
{
    PESSOA P001 = {"Adilson Teixeira Lima", 43, 1500.00, {22,03, 1978}};
    //PESSOA P002 = {"Anna Livia Silva Lima", 10, 000.00, {29, 3, 2011}};
    //PESSOA P003 = {"Maridelia Ferreira Silva Lima", 45, 4000.00,{29, 3, 1976}};
    Mostrar(P001);
    puts("\n");
    Ler(&P001);
    puts("\n");
    Mostrar(P001);

}
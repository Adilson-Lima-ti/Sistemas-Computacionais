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
    PESSOA P002 = {"Anna Livia Silva Lima", 10, 000.00, {29, 3, 2011}};
    PESSOA P003 = {"Maridelia Ferreira Silva Lima", 45, 4000.00,{29, 3, 1976}};
    Mostrar(P001);
    Mostrar(P002);
    Mostrar(P003);
}
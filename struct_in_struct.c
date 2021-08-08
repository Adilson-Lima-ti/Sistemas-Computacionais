#include <stdio.h>

typedef struct 
{
    int dia;
    char mes[3+1];
    int ano;
} DATA;

typedef struct s_pessoa
{
    char nome[100];
    int idade;
    float salario;
    DATA dt_nasc;
} PESSOA;


main()
{
    PESSOA homem = {"Adilson Lima", 43, 1500.00,{22, "MAR", 1978}};
    PESSOA mulher[2] = {{"Maridelia Ferreira", 45, 4000.00,{29, "MAR", 1976}},
                        {"Anna Livia", 10, 000.00, {29, "MAR", 2011}}
                        };
    printf("Membro:%s, idade:%d, nascido em:%d/%s/%d salario atual: %.2f\n", 
    homem.nome, homem.idade, homem.dt_nasc.dia, homem.dt_nasc.mes, homem.dt_nasc.ano, homem.salario);
    int select = 0; 
    printf("Membro:%s, idade:%d, nascido em:%d/%s/%d salario atual: %.2f\n", 
    mulher[select].nome, mulher[select].idade, mulher[select].dt_nasc.dia, mulher[select].dt_nasc.mes, mulher[select].dt_nasc.ano, mulher[select].salario);

    select = 1; 
    printf("Membro:%s, idade:%d, nascido em:%d/%s/%d salario atual: %.2f\n", 
    mulher[select].nome, mulher[select].idade, mulher[select].dt_nasc.dia, mulher[select].dt_nasc.mes, mulher[select].dt_nasc.ano, mulher[select].salario);

    strcpy(mulher[1].nome, "Anna Livia Silva Lima");// alterar nome no código

    select = 1; 
    printf("Membro:%s, idade:%d, nascido em:%d/%s/%d salario atual: %.2f\n", 
    mulher[select].nome, mulher[select].idade, mulher[select].dt_nasc.dia, mulher[select].dt_nasc.mes, mulher[select].dt_nasc.ano, mulher[select].salario);

    printf("Digite o apelido da Maridelia\n");
    scanf("%s", mulher[0].nome);

    select = 0; 
    printf("Membro:%s, idade:%d, nascido em:%d/%s/%d salario atual: %.2f\n", 
    mulher[select].nome, mulher[select].idade, mulher[select].dt_nasc.dia, mulher[select].dt_nasc.mes, mulher[select].dt_nasc.ano, mulher[select].salario);


}

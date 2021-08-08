#include <stdio.h>


struct Data
{int dia, ano;
char mes[12];
} dt_nasc;


/*struct Data d, datas[100], *ptr_data;

struct Pessoa{
    int idade;
    char sexo, est_civil;
    char Nome[60];
    float salario;
} Paulo, Teresa;

struct Person
{
    char Mother[100], Father[100];
    char Dog[60];
}John;

struct Person Mary;*/




main()
{
    dt_nasc.dia = 22;
strcpy(dt_nasc.mes, "Março");
dt_nasc.ano = 1978;
    
struct Data dt_nasc2 = {29, 1976, "Março"};
struct Data dt_nasc3 = {29, 2011, "Abril"};

printf("Data de nascimento Adilson: %d/%s/%d\n", dt_nasc.dia, dt_nasc.mes, dt_nasc.ano);
printf("Data de nascimento Maridelia: %d/%s/%d\n", dt_nasc2.dia, dt_nasc2.mes, dt_nasc2.ano);
printf("Data de nascimento Anna Livia: %d/%s/%d\n", dt_nasc3.dia, dt_nasc3.mes, dt_nasc3.ano);
printf("Digite o mes correto da Anna Livia: ");
scanf("%s", dt_nasc3.mes);
printf("Nova Data de nascimento Anna Livia: %d/%s/%d\n", dt_nasc3.dia, dt_nasc3.mes, dt_nasc3.ano);
}
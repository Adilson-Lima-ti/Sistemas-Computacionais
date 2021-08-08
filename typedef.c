#include <stdio.h>
typedef struct Pessoa
{
    int idade;
    char sexo, est_civil;
    char Nome[60];
    float salario;
} PESSOA;


main()
{
    struct Pessoa Nadir, Maridelia;
    // PESSOA Anna;
    PESSOA Adilson = {43, 'M', 'C', "Adilson Lima", 1500};
    
    Adilson.salario = 3000;
    strcpy(Adilson.Nome, "Novo nome");
    Adilson.est_civil = 'S';

    Maridelia.salario = 4000;
    Maridelia.est_civil = 'C';
    strcpy(Maridelia.Nome, "Maridelia Ferreira");

    printf("Nome:%s, Estado Civial:%c, Salário:%.2f\n", Adilson.Nome, Adilson.est_civil, Adilson.salario);
    printf("Nome:%s, Estado Civil: %c, Salario: %.2f\n", Maridelia.Nome, Maridelia.est_civil, Maridelia.salario);

   
}
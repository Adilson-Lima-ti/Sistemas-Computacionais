#include <stdio.h>

/*int *p, q, acm = 35;
p = &acm; // p recebe o endereço da variável acm
q = *p; // a variável q recebe o valor da variável "no endereço" p
/* O valor de q agora é 35 (valor da variável apontada por p)
Os operadores de ponteiros têm precedência maior que todos os operadores
aritméticos, exceto o menos unário.
Em ponteiros somente 3 operações são possíveis:
Atibuição de ponteiros, */


//Aritmética de ponteiros (Adição e subtração) e Comparação de ponteiros


int main (){

int x=8;
int *p1, *p2;
p1 = &x;
p2 = p1; 
printf("%d %d\n", p1, *p1);
printf("%d %d\n", p2, *p2);


}
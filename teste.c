#include <stdio.h>


int main (){

int i=10, j=20;
int *pti, *ptj;
pti = &i;
ptj = &j; 
printf("%d %d\n", pti, *pti);
printf("%d %d\n", ptj, *ptj);
printf("\n");
printf("j = pti == ptj;\n");
printf("\n");
j = pti == ptj;
printf("%d %d\n", pti, *pti);
printf("%d %d\n", ptj, *ptj);
printf("i => %d \n", i);
printf("j => %d \n", j);

printf("\n");
printf("i = pti -ptj;\n");
printf("\n");
i = pti - ptj;
printf("%d %d\n", pti, *pti);
printf("%d %d\n", ptj, *ptj);
printf("i => %d \n", i);
printf("j => %d \n", j);

printf("\n");
printf("pti++\n");
printf("\n");
pti++;
printf("%d %d\n", pti, *pti);
printf("%d %d\n", ptj, *ptj);
printf("i => %d \n", i);
printf("j => %d \n", j);

return 0;
}
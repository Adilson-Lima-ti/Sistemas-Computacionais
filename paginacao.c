#include <stdio.h>

typedef struct moldura{
    int bv; //Bit de validade
    char contentRAM;

}frame;
typedef struct pagina{
    int bv; // Bit de validade
    char contentDISCO;
    frame *pv;
}page;

frame RAM[2];
page DISCO[20];
int i, j;

int main(){
// Inicializacao da RAM
    for (i=0; i<2; i++)
        RAM[i].bv=0;
//paginacao
    for (i=0; i<20; i++){
        DISCO[i].contentDISCO='a' +i;
        DISCO[i].bv=1;
        DISCO[i].pv=NULL;
    
     
// Simulação que a 5a e a 10a pagina são mais usadas então sobe na RAM
    if ((DISCO[i].contentDISCO == 'e') || (DISCO[i].contentDISCO == 'j'))
        for (j=0; j<2; j++) // aloca mais usado no 1º espaco da RAM disponivel
            if (RAM[j].bv==0){
                RAM[j].bv=1;
                DISCO[i].pv=&RAM[j];// ponteiro do DISCO tem endereço da RAM que guarda a pagina
                RAM[j].contentRAM=DISCO[i].contentDISCO; j=2;
            }
    }
printf("Visualizacao do DISCO\n");
for (i=0; i<20; i++){
    printf("%d page [content:%c", i+1, DISCO[i].contentDISCO);
    printf(" BV:%d", DISCO[i].bv);
    printf(" RAM:%d]\n", DISCO[i].pv);
}
printf("Visualizacao RAM\n");
for (j=0; j<2; j++){
    printf("%d frame[content:%c ", j+1, RAM[j].contentRAM);
    printf("BV:%d]\n", RAM[j].bv);
}
    return(0);
}
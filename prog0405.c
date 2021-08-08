#include <stdio.h>

main()
{
    int n, num;

    num=1;

    while(num <=5)
        {
        n=1;
        printf("Tabuada do %d\n", num);
        while (n<=10){
       
                printf("%2d * %2d = %2d\n", num, n, num*n);
            n++;
            }

        num++;
        printf("\n");
        }
}

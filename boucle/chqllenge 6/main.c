#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i ;
    printf("entre un nombre :");
    scanf("%d",&n);


    for(i=1; i<n; i++)

        if(n % i == 0 )
            printf("les facteur de %d est :%d \n",n,i);




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1=0, c2=0, c3=0;
    int i;
    int a[100];
    for (i=0; i<100; i++)
    {
        a[i]= rand()%2;
    }

    for (i=0; i<100; i++)
    {
    if(a[i]==a[i+1])
    {
        c1++;
        printf("%d............levels are same, LEVEL\n",a[i]);
    }
    else if(a[i]==0&&a[i+1]==1)
    {
        c2++;
        printf("%d...one level increase, rising edge\n",a[i]);
    }
    else
    {
        c3++;
        printf("%d..one level decrease, falling edge\n",a[i]);
    }
    }

    printf("\n\ntotal no. of levels - %d\n", c1);
    printf("total no. of rises - %d\n", c2);
    printf("total no. of falls - %d\n", c3);

    return 0;
}

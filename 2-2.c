#include<stdio.h>

int main(void)
{
    int n;
    int m;
    int rev_m;
    int i,j;
    int tmp;
    int before_n = 0;

    while (1)
    {
        scanf("%d",&n);
        if(n < before_n)
        {
            printf("End");
            break;
        }
        
        tmp = n;
        m = 1;
        rev_m = 0;

        while (tmp)
        {
            m *= tmp%10;
            tmp /= 10;
        }
        
        tmp = m;
        while (tmp)
        {
            rev_m *= 10;
            rev_m += tmp%10;
            tmp /= 10;
        }

        printf("%d %d %d %d\n",n,m,rev_m,n-before_n);
        before_n = n;

    }

    return 0;
}
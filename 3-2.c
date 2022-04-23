#include<stdio.h>

int main(void)
{
    int n;
    int i,j;
    int input;
    int is_prime = 1;
    int starflag = 0;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&input);
        
        is_prime = 1;
        
        for(j=2; j<=(input+1)/2; j++)
        {
            if(input%j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if(input <= 1)
        {
            is_prime = 0;
        }

        if(is_prime)
        {
            printf("%d ",input);
            starflag = 1;
        }
        if((!is_prime && starflag))
        {
            printf("*\n");
            starflag = 0;
        }
        else if(i == n-1 && is_prime)
        {
            printf("*\n");
            starflag = 0;
        }
    }

    return 0;
}
#include<stdio.h>

int main(void)
{
    char c1,c2;
    char c;
    // char t;
    // int i,j;
    char i,j;
    int cnt=0;

    scanf("%c%c",&c1,&c2);

    for(i=c1; i<=c2; i++)
    {
        for(c=c1; c<=c2; c++)
        {
            if(c == 'a')
            {
                for(j=c1; j<=c2; j++)
                {   
                    if((i == c && j == c) || c == 0 || c > j)
                    {
                        continue;
                    }
                    
                    cnt++;
                    printf("%c%c%c\n",i,c,j);
                }
            }
            else if(c == 'e')
            {
                for(j=c1; j<=c2; j++)
                {   
                    if((i == c && j == c) || c == 0 || c > j)
                    {
                        continue;
                    }
                    
                    cnt++;
                    printf("%c%c%c\n",i,c,j);
                }
            }
            else if(c == 'i')
            {
                for(j=c1; j<=c2; j++)
                {   
                    if((i == c && j == c) || c == 0 || c > j)
                    {
                        continue;
                    }
                    
                    cnt++;
                    printf("%c%c%c\n",i,c,j);
                }
            }
            else if(c == 'o')
            {
                for(j=c1; j<=c2; j++)
                {   
                    if((i == c && j == c) || c == 0 || c > j)
                    {
                        continue;
                    }
                    
                    cnt++;
                    printf("%c%c%c\n",i,c,j);
                }
            }
            else if(c == 'u')
            {
                for(j=c1; j<=c2; j++)
                {   
                    if((i == c && j == c) || c == 0 || c > j)
                    {
                        continue;
                    }
                    
                    cnt++;
                    printf("%c%c%c\n",i,c,j);
                }
            }


        }
    }
    if(cnt == 0)
    {
        printf("none");
    }

    return 0;
    
}
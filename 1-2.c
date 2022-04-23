#include<stdio.h>

int main(void)
{
    int n;
    int pw;
    int i,j;
    int code;
    int fn, sn, tn;
    int cen=0, swn=0, dsn=0;
    int wrong_ce=0, wrong_sw=0, wrong_ds = 0;
    int wrong_flag = 0;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&pw);
        code = (pw/100)%10;
        fn = pw/10000;
        sn = (pw/1000)%10;
        tn = (pw/100)%10;

        if((!(pw <= 99999 && pw >= 10000)) || (pw%100 != 0) || (!(code >= 0 && code <= 5)) ||   ((fn == sn && sn == tn) || (fn != sn && sn != tn && tn != fn)))
        {
            wrong_flag = 1;
            printf("none\n");
            continue;
        }
        else
        {
            if(code == 0 || code == 1 || code == 2)
            {
                cen++;
                printf("CE\n");
                if(wrong_flag)
                {
                    wrong_ce++;
                }
            }
            if(code == 3 || code == 4)
            {
                swn++;
                printf("SW\n");
                if(wrong_flag)
                {
                    wrong_sw++;
                }
            }
            if(code == 5)
            {
                dsn++;
                printf("DS\n");
                if(wrong_flag)
                {
                    wrong_ds++;
                }
            }
            wrong_flag = 0;
        }
    }

    printf("%d %d %d\n",cen,swn,dsn);
    printf("%d %d %d",cen-wrong_ce, swn-wrong_sw, dsn-wrong_ds);

    return 0;
}
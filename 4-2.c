#include<stdio.h>

int main(void)
{
    char input;
    char first_char = 52;
    char second_char = 52;
    int cnt = 0;

    while (1)
    {
        scanf("%c",&input);
        if(input == '!')
        {
            input = '~';
        }
        //abcde fghij klmno pqrst uvwxy z
        
        if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) //alphabet
        {
            // printf("input : %c\n",input);
            if(input >= 'a' && input <= 'z') //small
            {
                input -= 'a';
                input = input*2+1; //a b c d 1 3 5 7 ; z = 51
            }
            else if(input >= 'A' && input <= 'Z') //large
            {
                input -= 'A';
                input = input*2; // A B C D 0 2 4 6; Z = 50
            }
            // printf("!input : %d\n",input);
            if(input < first_char)
            {
                second_char = first_char;
                first_char = input;
            }
            else if(input > first_char && input < second_char)
            {
                second_char = input;
            }
        }
        else
        {
            // printf("%c\n",input);
            if(first_char != 52 && second_char != 52)
            {
                if(first_char%2 == 0)
                {
                    first_char /= 2;
                    first_char += 'A';
                }
                else
                {
                    first_char--;
                    first_char /= 2;
                    first_char += 'a';
                }
                
                if(second_char%2 == 0)
                {
                    second_char /= 2;
                    second_char += 'A';
                }
                else
                {
                    second_char--;
                    second_char /= 2;
                    second_char += 'a';
                }
                printf("%c%c\n",first_char,second_char);
            }
            first_char = 52;
            second_char = 52;
        }

        if(input == '~')
        {
            break;
        }
        
    }
    
    return 0;
}
#include <stdio.h>
#include <cs50.h>

int main(void)
{
       
    printf("How many would you like\n");
    int count = GetInt();
    
    while(count > 23 || count < 0)
    {
        printf("retry\n");
        printf("How many would you like\n");
        count = GetInt();
    }
    
    for(int i = 1; i <= count; i++)
    {
        for(int x = count- i; x > 0 ; x--)
        {
            printf("%c", ' ');
            
        }
        
        for(int n = 0; n <= i; n++)
        {
            
            printf("%c", '#');
        }
        printf("\n");
    }

}

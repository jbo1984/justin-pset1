#include <stdio.h>

int main(void)
{
    // intializes varible that will hold user input
    int number = 0;
    printf("Enter an integer\n");
    scanf("%i", &number);
    
    int n = 0;
    while(number != 0)
    {
        n = number %10;
        printf("%i",n);
        number /= 10;
    }
    printf("\n");
}

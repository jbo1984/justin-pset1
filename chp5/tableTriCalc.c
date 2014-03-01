#include <stdio.h>

int main(void)
{
    int triNum = 0;
    
    //prints the top of table
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n      Sum from 1 to n\n");
    printf("---     ---------------");
    
    //loops and displays the value in first column then displays the triangular value
    for (int n = 1; n<= 10; n++)
    {
        triNum += n;
        printf(" %2i             %i\n", n, triNum);
    }
}

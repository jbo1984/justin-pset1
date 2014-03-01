#include <stdio.h>

int main(void)
{
    int triangularNumber = 0;
    // Loops through the for loop intialing 'n' and loops to 200 and increments 'n' by 1 then adds 1 to 'triangluarNumber'
    for(int n = 1; n <=200; n++)
    {
        triangularNumber += n;
    }
    
    printf("The 200th triangular number is %i\n", triangularNumber);
}

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Please enter a change amount.\n");
    double x = GetDouble();
    int y =(int)round(x *100);
    //int newV = 0;
    //int re=0;
    int quarter =0;
    int nickel = 0;
    int dime = 0;
    int penny = 0;
    
    //printf("y = %d\n",y);
    //printf("re = %d", re);
    while(x < 0)
    {
        printf("Please enter a change amount.\n");
        x = GetFloat();
        y = x *100;
    }
    
    if(y >= 25)
    {
    quarter = y/25;
    y = y%25;
    //printf("y = %d\n",y);
    //printf("re = %d\n", re);
    //printf("quarter= %d\n", quarter);
    }
    if(y >=10)
    {
    
    dime = y/10;
    y = y%10;
    //printf("y = %d\n",y);
    //printf("re = %d\n", re);
    //printf("dime= %d\n", dime);
    }
    if(y >=5)
    {
    
    nickel = y/5;
    y = y%5;
    //printf("y = %d\n",y);
    //printf("re = %d\n", re);
    //printf("nickel= %d\n", nickel);
    } 
    if(y >=1)
    {
    
    penny = y/1;
    y = y%1;
    //printf("y = %d\n",y);
    //printf("re = %d\n", y);
    //printf("penny= %d\n", penny);
    }
    printf("%d\n", quarter+dime+nickel+penny);
    
    
     
    
            
    
    
    
}

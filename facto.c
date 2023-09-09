//Factorial of a number
#include <stdio.h>

int fact_rec(int n)
{
    if(n>=1)
    {
        return(n*fact_rec(n-1));
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter the number of factorial :" );
    scanf("%d",&n);
    int fact=fact_rec(n);
    printf("Factorial of %d is %d",n,fact);
    return 0;
}
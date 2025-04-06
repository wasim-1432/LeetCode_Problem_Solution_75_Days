#include<stdio.h>
#include<math.h>
int CountPrimes(int n);
int main()
{
    printf("%d",CountPrimes(10));
    printf("\n");
    return 0;
}
int CountPrimes(int n)
{
    int i,s,count=0;
    if(n<2)
    {
        return 0;
    }
    for(s=2;s<n;s++)
    {
        int isPrime=1;
        for(i=2;i<=sqrt(s);i++)
        {
            if(s%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            count++;
        }
    }
    return count;
}
#include<stdio.h>
int main()
{
    long int n,m,a,b,sum,count,carry;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        if(a==0&&b==0)
        break;
         count=0;
         carry = 0;

        while(a!=0||b!=0)
        {
                m=a%10;
                a=a/10;
                n=b%10;
                b=b/10;
           sum=m+n+carry;
            carry = 0;

           if(sum>9)
           {
            carry = 1;
            count++;
           }
        }
            if(count == 0)
                printf("No carry operation.\n");

            else
            if(count==1)
              printf("%ld carry operation.\n",count);

            else
              printf("%ld carry operations.\n",count);
    }
    return 0;
}

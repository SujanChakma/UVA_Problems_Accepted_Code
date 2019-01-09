#include<stdio.h>
int main()
{
    long int a,b,i,count,p,max,temp;

    while(scanf("%ld %ld",&a,&b)==2)
    {
                printf("%ld %ld ",a,b);

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }

        max=0;
        for(i=a;i<=b;i++)
        {
            count=0;
            p=i;
            while(p!=1)
        {

                if(p%2==0)
            {
                p=p/2;
                count++;
            }
            else
            {
                p=3*p+1;
                count++;
            }
        }

           if(max<count)
            max=count;
        }
                printf("%ld",max+1);
        printf("\n");

        }
    return 0;
}

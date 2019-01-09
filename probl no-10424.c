#include<stdio.h>
#include<string.h>

int main()
{
    char a[10],b[10],i,j;
    long int c,d,m,n,sub1,sub2,sum1=0,sum2=0,sum3=0,sum4=0;
    float ratio,p,q;

    while(gets(a))
    {
        sum1=sum2=sum3=sum4=0;
        c=strlen(a);

        for(i=0;i<c;i++)
        {
            if(a[i]>=65&&a[i]<=90)
            {
                sub1=a[i]-64;
                sum1=sum1+sub1;
            }

            if(a[i]>=97&&a[i]<=122)
            {
                sub1=a[i]-96;
                sum1=sum1+sub1;
            }
        }

        while(sum1>9)
        {
                sum3 = 0;
            while(sum1!=0)
            {
                m=sum1%10;
                sum1=sum1/10;
                sum3=sum3+m;
            }
            sum1=sum3;
        }
         p=(float)(sum1);

        gets(b);
        d=strlen(b);
        for(j=0;j<d;j++)
        {
            if(b[j]>=65&&b[j]<=90)
            {
                sub2=b[j]-64;
                sum2=sum2+sub2;
            }
            if(b[j]>=97&&b[j]<=122)
            {
                sub2=b[j]-96;
                sum2=sum2+sub2;
            }
        }

        while(sum2>9)
        {
            sum4=0;
        while(sum2!=0)
        {
            n=sum2%10;
            sum2=sum2/10;
            sum4=sum4+n;
        }
        sum2=sum4;
        }
        q=(float)(sum2);

        char ch='%';

       if(p>q)
        {
            ratio=(q/p)*100;
            printf("%.2f %c",ratio,ch);
        }
        else
        {
        ratio=(p/q)*100;
        printf("%.2f %c",ratio,37);
        }
        printf("\n");
    }
    return 0;
}

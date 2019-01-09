#include<stdio.h>

int main()
{
    long int i,j,k,l,m,n,temp,hold,a[5000],b[5000];

    while(scanf("%ld",&n)==1)
    {
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);

        if(n == 1)
            hold = 0;

        if(n>1){
        for(j=0;j<n-1;j++)
        {
            b[j]=a[j+1]-a[j];

            if(b[j]<0)
                b[j]=(-1)*b[j];
        }

        for(l=1;l<n-1;l++)
            {
            for(k=1;k<n-l;k++)
                {
                    if(b[k-1]>b[k])
                    {
                        temp=b[k-1];
                        b[k-1]=b[k];
                        b[k]=temp;
                    }
                }
            }

           for(m=0,hold=0;m<n-1;m++)
           {
               if(b[m]==(m+1))
                    hold=0;

               else
                {
                     hold=1;
                     break;
                }
           }
        }

        if(hold == 1)
            printf("Not jolly\n");

        if(hold == 0)
            printf("Jolly\n");
    }
    return 0;
}

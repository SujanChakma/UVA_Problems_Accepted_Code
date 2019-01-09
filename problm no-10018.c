#include<stdio.h>

int main()
{
   long int i, a, n, k, res = 0, r, count=0;

   scanf("%ld",&n);

   for(i=0;i<n;i++)
    {
        scanf("%ld",&a);
        res=0;
        count=0;
        while(a != res)
        {
            a = a + res;
            k = a;
            res = 0;

            while(a != 0)
            {
                r = a%10;
                a = a/10;
                res = res*10 + r;
            }

            a = k;
            count ++;
        }
            printf("%ld ",count-1);
            printf("%ld\n",res);

        }

    return 0;
}

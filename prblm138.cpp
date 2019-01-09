#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n=2,cnt=0,sum,r;
    while(1)
    {
        sum = (n*(n+1))/2;
        r = sqrt(sum);
        if(r*r==sum)
        {
            printf("%10lld%10lld",r,n);
            cout<<endl;
            cnt++;
        }
        if(cnt==10)
        break;
        n++;
    }
    return 0;
}

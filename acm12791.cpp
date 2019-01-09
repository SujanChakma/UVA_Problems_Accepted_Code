#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i;
    double f,s,d;
    while(cin>>f>>s)
    {
        for(i=1;i<s;i++)
        {
            d = i - (f/s)*i;
            if(d>=1)
                break;
        }

        cout<<i<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long a,b;
    while(cin>>t)
    {
        for(int i=0;i<t;i++)
        {
            cin>>a>>b;
            if(a==b)
                cout<<"="<<endl;
            else if(a<b)
                cout<<"<"<<endl;
            else if(a>b)
                cout<<">"<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int te;
    cin>>te;
    while(te--)
    {
        int o, t;
        cin>>o>> t;
        if((o+t*2)%2==1 || (o==0 && t%2==1) || (t==0 && o%2==1))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}



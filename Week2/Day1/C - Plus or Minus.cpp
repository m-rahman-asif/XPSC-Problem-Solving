#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, t, a, b, c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if((a+b)==c)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;
    }

    return 0;
}

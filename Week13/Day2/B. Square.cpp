#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, a, b, c, d;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        cin>>c>>d;
        if(((a==c) && (b+d==a)) || ((a==d) && (c+b==a)) || ((b==c) && (a+d==b)) || ((b==d) && (a+c==b)))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

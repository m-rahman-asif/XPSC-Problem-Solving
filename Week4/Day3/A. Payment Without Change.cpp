#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, a, b, c, d, e;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;

       if(d%c<=b && (a*c)+b>=d)
            cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;

    }
    return 0;
}









#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, s=0;
    cin>>a>>b;
    if(a>b)
    {
        s+=a;
        a--;
        if(a>b)
            s+=a;
        else
            s+=b;
    }
    else if(b>a)
    {
        s+=b;
        b--;
        if(b>a)
            s+=b;
        else
            s+=a;
    }
    else
        s+=(2*a);
    cout<<s<<endl;

    return 0;
}






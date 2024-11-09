#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int i, n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    s=s+s;

    int res=INT_MIN, g=-1;

    for(i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='g')
            g=i;
        if(s[i]==c)
            res=max(res, g-i);
    }

    cout<<res<<endl;



    }

    return 0;
}

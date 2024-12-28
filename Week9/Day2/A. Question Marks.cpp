#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, x;
        cin>>n;
        x=n;
        int a=x, b=x, c=x, d=x, ans=0;
        string s;
        cin>>s;
        for(i=0; i<4*n; i++)
        {
            if(s[i]=='A' && a>0)
            {
                a--;
                ans++;
            }
            if(s[i]=='B' && b>0)
            {
                b--;
                ans++;
            }
            if(s[i]=='C' && c>0)
            {
                c--;
                ans++;
            }
            if(s[i]=='D' && d>0)
            {
                d--;
                ans++;
            }
        }
        cout<<ans<<endl;
    }




    return 0;
}

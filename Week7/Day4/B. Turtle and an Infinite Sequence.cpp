#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
    long long int n, m, i;
    cin>>n>>m;
    long long int o=n;
    if(n==0)
    {
        for(i=n+1; i<=n+m; i++)
            o|=i;
    }
    else
    {
        for(i=n+1; i<=n+m; i++)
            o|=i;
        for(i=n-1; i>=n-m; i--)
        {
            if(i==-1)
                break;
            o|=i;
        }
    }
    cout<<o<<endl;
    }

    return 0;
}








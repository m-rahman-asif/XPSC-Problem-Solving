#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, ans=0, tmp;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            tmp=abs(a[i]-(i+1));
            ans=__gcd(ans, tmp);
        }
        cout<<ans<<endl;
    }

    return 0;
}









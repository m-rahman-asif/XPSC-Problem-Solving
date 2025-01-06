#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    long long int mod=1000000007;
    while(t--)
    {
        int n, i;
        long long int ans=1;
        cin>>n;
        for(i=1; i<=n; i++)
            ans=(ans*i)%mod;
        cout<<ans<<endl;



    }





    return 0;
}









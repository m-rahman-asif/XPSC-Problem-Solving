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
        long long int i, n, ans=0;
        cin>>n;
        long long int a[n];
        map<long long int, long long int>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m[__lg(a[i])]++;
        }

         for(auto u:m)
    {
        ans+=u.second*(u.second-1)/2;
    }
    cout<<ans<<endl;
    }




    return 0;
}









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
        long long int n, k, i, j, p, ans=0;
        cin>>n>>k;
        long long int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        map<long long int, long long int>m;
        for(i=30; i>=0; i--)
        {
            for(j=0; j<n; j++)
            {
                if(((a[j]>>i)&1)==1)
                    m[i]++;
            }
        }
        for(i=30; i>=0; i--)
        {
            if(n-m[i]==0)
            {
                p=pow(2, i);
                ans+=p;
            }
            else if(n-m[i]>0 && k>=n-m[i])
            {
                p=pow(2, i);
                ans+=p;
                k-=n-m[i];
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}









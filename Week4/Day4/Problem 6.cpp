#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, k, i;
    cin>>n>>k;
    long long int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    long long int l=0, r=0, ans=0, mx, mn, mx2, mn2;
    multiset<long long int>ms;
    while(r<n)
    {
        ms.insert(a[r]);
        mx=*ms.rbegin();
        mn=*ms.begin();
        if(mx-mn<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(l<=r)
            {
                mx=*ms.rbegin();
                mn =*ms.begin();
                if(mx-mn<=k)
                    break;
                    ms.erase(ms.find(a[l]));
                l++;

            }
            mx=*ms.rbegin();
                mn=*ms.begin();
            if(mx-mn<=k)
        {
            ans+=(r-l+1);
        }

        }
        r++;
    }
    cout<<ans<<endl;



    return 0;
}









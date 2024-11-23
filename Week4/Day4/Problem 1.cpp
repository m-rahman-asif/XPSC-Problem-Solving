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
    long long int s=0, l=0, r=0, ans=0;
    while(r<n)
    {
        s+=a[r];
        if(s<=k)
        {
            ans=max(ans, r-l+1);
        }
        else
        {
            s-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;



    return 0;
}








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
    int i, n, k;
    cin>>n>>k;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    int l=0, r=0, s=0, ans=0;

    while(r<n)
    {
        s+=a[r];
        if(s==k)
        {
            ans=max(ans, r-l+1);
        }
        else
        {
            while(s>k)
            {
                s-=a[l];
                l++;
            }
        }
        r++;
    }
    if(ans==0)
        cout<<-1<<endl;
    else
    cout<<n-ans<<endl;

    }
    return 0;
}








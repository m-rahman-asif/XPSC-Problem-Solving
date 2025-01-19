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
        long long int i, n, p=-1, ans=0;
        cin>>n;
        long long int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            if(a[i]!=0)
            {
                p=i;
                break;
            }
        }
        if(p!=-1)
        {
        for(i=p; i<n-1; i++)
        {
            if(a[i]==0)
                ans++;
            else
                ans+=a[i];
        }
        }
        cout<<ans<<endl;





    }

    return 0;
}







 

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
        long long int i, n, c=0, c1=0, o=0, o3=0, f=0, p, ans;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(f==0 && a[i]==0)
            {
                a[i]=1;
                f=1;
                p=i;
            }
            if(a[i]==1)
            {
                o++;
            }
            if(a[i]==0)
            {
                c1+=o;
            }
        }
        if(f==1)
        {
            a[p]=0;
        }

        for(i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                o3++;
            }
            if(a[i]==0)
            {
                c+=o3;
            }
        }
        ans=max(c, c1);
        long long int c2=0, o2=0;
        for(i=n-1; i>=0; i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                break;
            }

        }
        for(i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                o2++;
            }
            if(a[i]==0)
            {
                c2+=o2;
            }
        }
        ans=max(ans, c2);
        cout<<ans<<endl;


    }
    return 0;
}








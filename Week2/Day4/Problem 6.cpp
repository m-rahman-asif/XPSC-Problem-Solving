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
    int i, n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    int f=0, l=0, r=n-1, mn=1, mx=n;
    for( ; ; )
    {
        if(l>=r)
            break;
        if(a[l]!=mn && a[l]!=mx && a[r]!=mn && a[r]!=mx)
        {
            cout<<l+1<<" "<<r+1<<endl;
            f=1;
            break;
        }
        if((a[l]==mx && a[r]==mn) || (a[l]==mn && a[r]==mx))
        {
            l++;
            mn++;
            r--;
            mx--;
        }
        else if(a[l]==mx)
        {
            l++;
            mx--;
        }
        else if(a[l]==mn)
        {
            l++;
            mn++;
        }
        else if(a[r]==mx)
        {
            r--;
            mx--;
        }
        else if(a[r]==mn)
        {
            r--;
            mn++;
        }

    }
    if(f==0)
        cout<<"-1"<<endl;
    }

    return 0;
}










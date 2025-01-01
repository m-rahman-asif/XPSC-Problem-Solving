#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, q;
    cin>>n>>m;
    int i, a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    //sort(a, a+n);
    for(i=1; i<=m; i++)
    {
        cin>>q;
        int l=0, r=n-1, mid, f=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]==q)
            {
                f=1;
                break;
            }
            else if(q<a[mid])
            {
                r=mid-1;
            }
            else
                l=mid+1;
        }
        if(f==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }


    return 0;
}









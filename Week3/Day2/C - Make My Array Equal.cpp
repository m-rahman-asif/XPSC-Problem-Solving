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
        int i, n, z=0, e=0, o, p, f=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                z++;
            else
            {
                f=1;
                o=a[i];
                e++;
                p=i;
                break;
            }
        }
        if(f==1)
        {
        for(i=p+1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                z++;
            else if(a[i]==o)
                e++;
        }
        }
        if(z+e==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}







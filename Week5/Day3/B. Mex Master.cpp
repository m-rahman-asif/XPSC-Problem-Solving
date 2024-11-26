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
        map<int, int>m;
        int n;
        cin>>n;
        int a[n], z=0, nz=0, r, mx=-1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                z++;
            else
                nz++;
            if(a[i]>mx)
                mx=a[i];
        }
        if(z==0)
            r=0;
        else
        {
            if(nz>=z-1)
                r=0;
            else
            {
                if(mx==1)
                    r=2;
                else
                    r=1;
            }
        }
        cout<<r<<endl;
    }

    return 0;
}









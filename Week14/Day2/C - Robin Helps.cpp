#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i, n, k, r=0, c=0;
        cin>>n>>k;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>=k)
                r+=a[i];
            else if(a[i]==0 && r>0)
            {
                r--;
                c++;
            }
        }
        cout<<c<<endl;
    }



    return 0;
}


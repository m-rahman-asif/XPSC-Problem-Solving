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
        int n, i, m=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>m && i!=n-1)
                m=a[i];
        }
        cout<<m+a[n-1]<<endl;


    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, c=0;
        cin>>n;
        int a[n];
        long long int b[n], s=0, m=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>m)
                m=a[i];
            s+=a[i];
            if(s-m==m)
            c++;

        }
        cout<<c<<endl;
    }
    return 0;

}

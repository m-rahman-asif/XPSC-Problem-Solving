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
        long long int a[n], gcd1=0, gcd2=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2==0)
                gcd1=__gcd(gcd1, a[i]);
            else
                gcd2=__gcd(gcd2, a[i]);
        }
        int f1=0, f2=0;
        for(i=0; i<n; i++)
        {
            if(i%2==0 && a[i]%gcd2==0)
                f1=1;
            if(i%2!=0 && a[i]%gcd1==0)
                f2=1;
        }
        if(gcd1==gcd2)
            cout<<0<<endl;
        else if(f1==0)
            cout<<gcd2<<endl;

        else if(f2==0)
            cout<<gcd1<<endl;
        else cout<<0<<endl;




    }




    return 0;
}









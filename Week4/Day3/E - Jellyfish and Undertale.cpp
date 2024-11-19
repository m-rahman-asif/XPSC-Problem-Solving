#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int i, t, a, b, n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        long long int x[n], sum=0;
        if(b>=a)
        {
            sum=a;
            b=a;
        }
        else sum=b;

        for(i=0; i<n; i++)
        {
            cin>>x[i];
            if(x[i]+1<=a)
                sum+=x[i];
            else
                sum+=a-1;
        }
        cout<<sum<<endl;

    }
    return 0;
}








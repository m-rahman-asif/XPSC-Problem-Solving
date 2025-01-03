#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, t;
    cin>>n>>t;
    vector<long long int>v(n);

    for(i=0; i<n; i++)
        cin>>v[i];

    long long int l=0, r=0, sum=0, c=0;
    while(l<n)
    {
        sum+=v[l];
        while(sum>=t)
        {
        if(sum==t)
            c++;
            sum-=v[r];
            r++;
        }
        l++;
    }
    cout<<c<<endl;

    return 0;
}



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
        long long i, n, k;
        cin>>n>>k;
        vector<long long int>v(k);
        for(i=0; i<k; i++)
            cin>>v[i];
        if(k==1)
            cout<<"YES"<<endl;
        else
        {
            vector<long long int>v2(n);
            long long int j=n-1;
            for(i=k-1; i>=1; i--)
            {
                v2[j]=v[i]-v[i-1];
                j--;
            }
            while(j>=0)
            {
                v2[j]=v2[j+1];
                v[0]-=v2[j];
                j--;
            }
            v2[0]+=v[0];
            if(is_sorted(v2.begin(),v2.end())==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}

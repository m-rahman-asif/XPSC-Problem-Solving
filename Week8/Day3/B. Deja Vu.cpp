#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n, q, i, p;
        cin>>n>>q;
        vector<long long int> v1(n), v2(q);
        for(i=0; i<n; i++)
            cin>>v1[i];
        for(i=0; i<q; i++)
            cin>>v2[i];

        for(i=0; i<n; i++)
        {
            for(auto u:v2)
            {
               if(v1[i]%(1<<u)==0)
               {
                   v1[i]+=(1<<(u-1));
               }

            }
        }
        for(auto u:v1)
            cout<<u<<" ";
        cout<<endl;
    }

    return 0;
}








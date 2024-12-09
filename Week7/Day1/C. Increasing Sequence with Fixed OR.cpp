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
        long long int n, i, p;
        cin>>n;
        vector<long long int>v;
        v.push_back(n);
        for(i=0; i<=__lg(n); i++)
        {
            if(((n>>i)&1)==1)
            {
                p=pow(2, i);
                if(n-p>0)
                    v.push_back(n-p);
            }
        }
        sort(v.begin(), v.end());
        cout<<v.size()<<endl;
        for(auto u:v)
            cout<<u<<" ";
        cout<<endl;
    }

    return 0;
}









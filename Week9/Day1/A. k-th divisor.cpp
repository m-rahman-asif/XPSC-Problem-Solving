#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a, b, t, i;
    vector<long long int>v;
    cin>>a>>b;
    for(i=1; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            t=a/i;
            v.push_back(i);
            if(t!=i)
            v.push_back(t);
        }
    }
    sort(v.begin(), v.end());
   // for(auto u: v)
     //   cout<<u<<" ";
    if(b>v.size())
    cout<<-1<<endl;
    else
        cout<<v[b-1]<<endl;


    return 0;
}









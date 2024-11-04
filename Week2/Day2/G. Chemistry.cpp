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
        int n, k, odd=0;
        cin>>n>>k;
        string s;
        map<char, int>m;
        cin>>s;
        for(auto u:s)
        {
            m[u]++;
        }
        for(auto u:m)
        {
            if(u.second%2!=0)
                odd++;
        }
        if((odd==0 || odd>=1) && k>=odd-1 && k<=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}







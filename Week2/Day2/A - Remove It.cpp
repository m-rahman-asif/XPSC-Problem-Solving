#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, n, k, a;
    cin>>n>>k;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a!=k)
            v.push_back(a);
    }
    for(auto u:v)
        cout<<u<<" ";
    cout<<endl;
    return 0;
}






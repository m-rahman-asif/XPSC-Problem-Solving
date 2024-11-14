
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m, i, x;
    cin>>n>>m;
    vector<long long int>v1, v2, v3;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(i=0; i<m; i++)
    {
        cin>>x;
        v2.push_back(x);
    }
    v1.insert(v1.end(), v2.begin(), v2.end());
    sort(v1.begin(), v1.end());

    for(auto u:v1)
    cout<<u<<" ";
    cout<<endl;

    return 0;
}








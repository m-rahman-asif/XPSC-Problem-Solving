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
    int i, j, n, a1, a2, a3;

    cin>>n;
    vector<int>v(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    a1=v[n-3]-v[0];
    a2=v[n-1]-v[2];
    a3=v[n-2]-v[1];
    cout<<  min(min(a1, a2), a3)<<endl;
    }
    return 0;
}






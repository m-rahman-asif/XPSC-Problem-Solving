#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin>>t;
    vector<int> a(t);
    for(i=0; i<t; i++)
        cin>>a[i];
    int q;
    cin>>q;
    sort(a.begin(), a.end());

    for(i=0; i<q; i++)
    {
        int n;
        cin>>n;
        auto ans=upper_bound(a.begin(), a.end(), n)-a.begin();
        cout<<ans<<endl;
    }
    return 0;
}

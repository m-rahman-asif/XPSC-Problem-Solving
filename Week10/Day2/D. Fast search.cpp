#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n, q, i, nq, s=0;
        cin>>n;
        vector<int> a(n);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cin>>q;
        sort(a.begin(), a.end());

        for(i=0; i<q; i++)
        {
            int l, r;
            cin>>l>>r;
            auto boro=lower_bound(a.begin(), a.end(), l), choto=upper_bound(a.begin(), a.end(), r);
            cout<<choto-boro<<endl;
        }




    return 0;
}










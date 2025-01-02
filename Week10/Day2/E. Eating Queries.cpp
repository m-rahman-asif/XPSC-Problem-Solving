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
        int n, q, i, nq, s=0;
        cin>>n>>nq;
        vector<int> a(n), ps(n);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        //cout<<"s="<<s<<endl;
        sort(a.begin(), a.end(), greater<>());
        for(i=0; i<n; i++)
        {
             if(i==0)
                ps[0]=a[0];
             else
                ps[i]=ps[i-1]+a[i];
        }
        for(i=0; i<nq; i++)
        {
            cin>>q;
            if(s<q)
                cout<<-1<<endl;
            else
            {
                auto it=lower_bound(ps.begin(), ps.end(), q);
                cout<<it-ps.begin()+1<<endl;
            }
        }


    }


    return 0;
}









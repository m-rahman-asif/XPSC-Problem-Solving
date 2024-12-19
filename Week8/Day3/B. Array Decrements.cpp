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
        int n, maxz=-1, np=0, fz=0;
        cin>>n;
        int i, a[n], b[n];
        vector<int>v;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]>a[i])
                np=1;
            if(b[i]==0)
            {
                int d=a[i]-b[i];
                fz=1;
                maxz=max(d, maxz);
            }
            else if(a[i]>=b[i])
                v.push_back(a[i]-b[i]);
        }
        for(i=1; i<v.size(); i++)
        {
            if(v[i]!=v[i-1])
            {
                np=1;
                break;
            }
        }
        if(v.empty()==0 && fz==1)
        {
            if(maxz>v[0])
                np=1;
        }
        if(np==1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

return 0;


}











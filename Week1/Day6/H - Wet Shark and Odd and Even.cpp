#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, s=0, i;
    cin>>n;
    vector<int>v(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    if(s%2==0)
        cout<<s<<endl;
    else
    {
        sort(v.begin(), v.end());
        for(i=0; i<n; i++)
        {
            if((s-v[i])%2==0)
            {
                cout<<s-v[i]<<endl;
                break;
            }
        }
    }
    return 0;
}





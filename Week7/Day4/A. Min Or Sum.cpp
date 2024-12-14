#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int i, a[n], o=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            o|=a[i];
        }
        cout<<o<<endl;
    }
    return 0;
}








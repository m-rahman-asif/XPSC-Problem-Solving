#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    set<int>s;
    cin>>n>>t;
    int a[n];
    map<int, int>m;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=n-1; i>=0; i--)
        {
            s.insert(a[i]);
            m[i]=s.size();
        }
    while(t--)
    {
        int c;
        cin>>c;
        cout<<m[c-1]<<endl;

    }


    return 0;
}

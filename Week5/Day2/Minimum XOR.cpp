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
    int n;
    cin>>n;
    int i, a[n], s=0, tmp;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s= a[i]^s;
    }
    int mn=s;
    for(i=0; i<n; i++)
    {
        tmp=a[i]^s;
        if(tmp<mn)
            mn=tmp;
    }
    cout<<mn<<endl;
    }

    return 0;
}









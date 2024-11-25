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
    int n, i, j;
    cin>>n;
    int a[n], v;
    for(i=0; i<n; i++)
        cin>>a[i];
    int f=0;
    for(i=0; i<256; i++)
    {
        int s=0;
        for(j=0; j<n; j++)
        {
            v=(a[j]^i);
            s=s^v;
        }
        if(s==0)
        {
            cout<<i<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<-1<<endl;
    }
    return 0;
}









#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, f=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<pow(2, n); i++)
    {
        int s=0;
        for(j=0; j<n; j++)
        {
            if((i>>j)&1==1)
                s+=a[j];
            else
                s-=a[j];
        }
        if(s%360==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}









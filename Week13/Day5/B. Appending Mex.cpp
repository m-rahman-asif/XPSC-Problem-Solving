#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, mx, f=1;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    mx=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>mx+1 || a[i]>i)
        {
            cout<<i+1;
            f=0;
            break;
        }
        if(a[i]>mx)
            mx=a[i];
    }
    if(f==1)
        cout<<-1;
    cout<<endl;
    return 0;



    return 0;
}



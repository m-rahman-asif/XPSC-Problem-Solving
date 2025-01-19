
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n], o=0;
        for(j=0; j<n; j++)
        {
            cin>>a[j];
            if(a[j]%2!=0)
                o++;
        }
        if(o%2==0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;

    }




    return 0;
}

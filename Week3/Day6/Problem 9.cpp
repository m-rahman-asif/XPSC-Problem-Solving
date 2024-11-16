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

    long long int i, n, j=-1, c=0;
    cin>>n;
    long long int a[n], s=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s+=abs(a[i]);
    }
    for(i=0; i<n; i++)
    {

        if(a[i]<1)
        {
            int f=0;
            for(j=i; j<n; j++)
            {
                if(a[j]<0)
                    f=1;
                if(a[j]>0)
                {
                    i=j;
                    break;
                }
            }
            if(f==1)
                c++;
        }
        if(j==n)
            break;
    }
    cout<<s<<" "<<c<<endl;
    }
    return 0;
}









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
    long long int n, i, j, sum=0;
    cin>>n;
    long long int a[n], b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else
            b[i]=a[i]+b[i-1];
    }
    string s;
    cin>>s;
    long long int l=0, r=s.size()-1;
    for(i=0; i<r; i++)
    {
        int f=0;
        if(s[i]=='L')
        {
            for(j=r; j>i; j--)
            {
                if(s[j]=='R')
                {
                    r=j-1;
                    if(i==0)
                        sum+=b[j];
                    else
                        sum+=b[j]-b[i-1];
                    break;
                }
                if(j==i+1)
                    f=1;
            }
            if(f==1)
                break;
        }


    }
    cout<<sum<<endl;



    }






    return 0;
}








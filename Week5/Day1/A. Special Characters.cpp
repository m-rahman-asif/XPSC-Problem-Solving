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
        int n, i;
        cin>>n;
        if(n%2!=0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=1; i<=n/2; i++)
                cout<<"AAB";
                cout<<endl;
        }




    }

    return 0;
}









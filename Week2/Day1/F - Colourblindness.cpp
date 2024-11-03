#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, c, t;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>c;
        int r1=0, r2=0;
        string ch1, ch2;
        cin>>ch1>>ch2;
        for(j=0; j<c; j++)
        {
            if  (((ch1[j]=='G' || ch1[j]=='B') && (ch2[j]=='G' || ch2[j]=='B')) || (ch1[j]=='R' && ch2[j]=='R'))
                r1++;
        }


        if(r1==c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


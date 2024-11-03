#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int ss;
        cin>>ss;
        string s;
        int T=0, I=0, M=0, U=0, R=0;
        cin>>s;
        for(j=0; j<s.size(); j++)
        {
            if(s[j]=='T')
                T++;
            else if(s[j]=='i')
                I++;
            else if(s[j]=='m')
                M++;
            else if(s[j]=='u')
                U++;
            else if(s[j]=='r')
                R++;
        }
        if((T==1 && I==1 && M==1 && U==1 && R==1) && (s.size()==5))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


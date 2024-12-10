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
        string s1, s2;
        int n;
        cin>>n>>s1>>s2;
        int f=1;
        map<int, int>m;
        for(int i=0; i<s1.size(); i++)
        {
            if(m[1]==0 && (s1[i]=='0' && s2[i]=='1'))
            {
                f=0;
                break;
            }
            if(s1[i]=='1')
                m[1]++;
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}








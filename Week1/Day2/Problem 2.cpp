#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int i, z;
    string s;
    cin>>z>>s;
    int a, b;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='B')
            {
                a=i;
                break;
            }
    }
    for(i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='B')
            {
                b=i;
                break;
            }
    }
    cout<<b-a+1<<endl;
    }
    return 0;
}

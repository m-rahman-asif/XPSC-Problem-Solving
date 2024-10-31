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
        string s;
        cin>>s;
        int f=0, pos;
        char p;
        for(int i=0; i<s.size()-1; i++)
        {
            cout<<s[i];
            if(s[i]==s[i+1])
            {
                f=1;
                p=s[i];
                pos=i;
                break;
            }
        }
        if(f==1)
        {
            for(char i='a'; i<='z'; i++)
            {
                if(i!=p)
                {
                    cout<<i;
                    break;
                }
            }
            for(int i=pos+1; i<s.size(); i++)
                cout<<s[i];
                cout<<endl;
        }
        else
        {
            cout<<s[s.size()-1];
            for(char i='a'; i<='z'; i++)
            {
                if(i!=s[s.size()-1])
                {
                    cout<<i;
                    break;
                }
            }
            cout<<endl;

        }
    }


    return 0;
}





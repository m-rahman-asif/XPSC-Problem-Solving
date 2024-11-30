#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="()")
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int f=0;
            for(i=0; i<s.size()-1; i++)
            {
                if((s[i]=='(' && s[i+1]=='(') || (s[i]==')' && s[i+1]==')'))
                            f=1;
            }

            if(f==1)
            {
                for(i=1; i<=s.size()*2; i++)
                {
                    if(i%2!=0)
                        cout<<'(';
                    else
                        cout<<')';
                }
            }
            else
            {
                for(i=1; i<=s.size(); i++)
                {
                        cout<<'(';
                }
                for(i=1; i<=s.size(); i++)
                {
                        cout<<')';
                }

            }
                cout<<endl;


        }
    }



    return 0;
}









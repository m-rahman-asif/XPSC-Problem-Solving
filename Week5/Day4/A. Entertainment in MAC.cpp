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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0, r=s.size()-1, ls=0, rs=0;
        for( ; ; )
        {
            if(l>=r)
                break;
            if(s[l]<s[r])
            {
                ls=1;
                break;
            }
            else if(s[r]<s[l])
            {
                rs=1;
                break;
            }
            l++;
            r--;
        }
        string s2, s3;
        if(ls==1 && n%2==0) //Right
        {
            cout<<s<<endl;
        }

        else if(ls==1 && n%2!=0) //RR
        {
            s3=s;
            reverse(s.begin(), s.end());
            s3=s3+s;
            cout<<s3<<endl;
        }
        else if(rs==1 && n%2==0)
        {
            s3=s;
            reverse(s.begin(), s.end());
            s=s+s3;
            cout<<s<<endl;
        }
        else if(rs==1 && n%2==1)
        {
            cout<<s<<endl;
        }
        else
            cout<<s<<endl;



    }

    return 0;
}









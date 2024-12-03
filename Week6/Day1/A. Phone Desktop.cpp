#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, s, tfg, es;
        cin>>a>>b;
        s=b/2;
        if(b%2!=0)
            s++;
        tfg=(s*15)-(b*4);


        if(a<=tfg)
            cout<<s<<endl;
        else
        {
            a-=tfg;
            es=a/15;
            if(a%15!=0)
                es++;
            cout<<s+es<<endl;
        }


    }
    return 0;

}



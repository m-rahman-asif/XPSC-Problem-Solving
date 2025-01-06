#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n!=2 && n%2==0)
        cout<<2<<endl;
    else
    {
        int p=1;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
            cout<<1<<endl;
        else
        {
            int a=n-2;
            p=1;
            for(int i=2; i<=sqrt(a); i++)
            {
                if(a%i==0)
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
                cout<<2<<endl;
                else
                    cout<<3<<endl;

        }
    }





    return 0;
}










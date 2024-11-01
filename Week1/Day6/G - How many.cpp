#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, t, i, j, k, c=0;
    cin>>s>>t;
    for(i=0; i<101; i++)
    {
        for(j=0; j<101; j++)
        {
            for(k=0; k<101; k++)
            {
                if(i+j+k<=s && i*j*k<=t)
                    c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}






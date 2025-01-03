#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q, i, j, n, t, ub, lb;
    cin>>n>>t;
   map<int, int>m;
    for(i=0; i<t; i++)
    {
        cin>>q;
        if(i==0)
        {
            ub=n-q;
            lb=q;
            cout<<max(lb, ub)<<endl;
        }
        else
        {
            ub=0, lb=0;
            for(j=q+1; j<n; j++)
            {
                ub++;
                if(m[j]==1)
                    break;
            }
            for(j=q-1; j>=0; j--)
            {
                lb++;
                if(m[j]==1)
                    break;
            }
            cout<<max(lb, ub)<<endl;
        }
        m[q]=1;

    }


    return 0;
}




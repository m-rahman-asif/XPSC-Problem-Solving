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
        int n, i, a;
        cin>>n;

        map<int, int>m;
        for(i=0; i<n; i++)
        {
            cin>>a;
            m[a]++;
        }
        priority_queue<int>q;
        for(auto u:m)
        {
            q.push(u.second);
        }
        while(q.empty()==0)
        {
            if(q.size()<=1)
                break;
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop();
            x--; y--;
            if(x>0)
                q.push(x);
            if(y>0)
                q.push(y);
        }
        int r=0;
        while(q.empty()==0)
            {
                r+=q.top();
                q.pop();
            }
            cout<<r<<endl;


    }
    return 0;
}










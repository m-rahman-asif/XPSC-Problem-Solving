#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t, i;
  string s, a, b, c;
  cin>>t;
  cin.ignore();
  for(i=1; i<=t; i++)
  {
      getline(cin, s);
      a=s;
      b=s;
      c=s;
      if(s=="abc")
        cout<<"YES"<<endl;
        else
      {
      swap(a[0], a[1]);
      swap(b[0], b[2]);
      swap(c[1], c[2]);
      if(a=="abc" || b=="abc" || c=="abc")
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;


      }
  }




    return 0;
}

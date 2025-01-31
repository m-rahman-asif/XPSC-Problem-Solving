#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, j;
  cin>>t;

  for(i=1; i<=t; i++)
  {
      int n, p=1;
      cin>>n;
      int a[n];
      for(j=0; j<n; j++)
      {
          cin>>a[j];
      }
      sort(a+0, a+n);
      a[0]+=1;
      for(j=0; j<n; j++)
      {
          p*=a[j];
      }
      cout<<p<<endl;


  }




    return 0;
}

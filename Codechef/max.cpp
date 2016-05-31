// https://www.codechef.com/SNCKQL16/problems/MMSUM
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
  int  t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++)
      cin>>A[i];
    long long maxx=0,maxg=0,maxn=0;
    bool nflag=0;
    for(int i=0;i<n;i++)
      {
        if(A[i]<0)
        {
          maxn=max(maxn+A[i],maxx);
        }
        else
        {
          nflag=1;
          maxn=maxn+A[i];
        }
        maxx+=A[i];
        if(maxx<0)
          maxx=0;
        if(maxn>maxg)
        maxg=maxn;
      }
      if(!nflag)
      {
        maxg=A[0];
        for(int i=1;i<n;i++)
        maxg=max(maxg,A[i]);
      }
    cout<<maxg<<endl;
  }
  return 0;
}

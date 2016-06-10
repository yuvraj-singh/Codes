#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,a,sum=0;
  cin>>n>>a;
  int A[n];
  for(int i=0;i<n;i++)
  {
    cin>>A[i];
  }
  int m=max(a,(n+1-a)),k,l;

  for(int i=0;i<m;i++)
  {
    if(a-i<=0)
    {
      if(A[a+i-1]==1)
        sum+=1;
    }
    else{
      if(a+i>n)
      {
        if(A[a-i-1]==1)
          sum+=1;
      }
      else{
        if((A[a-i-1]==1)&&(A[a+i-1]==1))
        {
          if(i==0)
          sum+=1;
          else
          sum+=2;
        }

      }
    }

  }
  cout<<sum;
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int A[5];

  int s=0;
  for(int i=0;i<5;i++)
  {
    cin>>A[i];
    s+=A[i];
  }
  sort(A,A+5);
  int prev=A[0],count=1,sum=prev,ans=0;
    for(int i=1;i<5;i++)
    {
      if((A[i]==prev)&&(count<3))
      {
        count++;
        sum+=prev;
      }
      else
      {
        prev=A[i];
        count=1;
        sum=prev;
      }
      if(count>=2)
      {
        ans=max(sum,ans);
      }

    }
cout<<s-ans;
  return 0;
}

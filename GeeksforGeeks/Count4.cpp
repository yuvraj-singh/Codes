// http://practice.geeksforgeeks.org/problems/count-numbers-containing-4/0
#include<iostream>
#include<math.h>
using namespace std;
bool check(int inp)
{
  while(inp>0)
  {
    if(inp%10==4)
      return 1;
    else
      inp = inp/10;
  }
  return 0;
}
int main()
{
  int a = pow(10,6);
  int t;
  cin>>t;
  int dp[a];
  int nn[a];
  for(int i=0;i<a;i++){
    nn[i]=i+1;
  }
  dp[0]=0;
  for(int i=1;i<a;i++)
  {
    if(check(nn[i]))
      dp[i] = dp[i-1]+1;
    else
      dp[i] = dp[i-1];
  }

  while(t--)
  {
    int n;
    cin>>n;
    cout<<dp[n-1]<<endl;
  }
  return 0;
}

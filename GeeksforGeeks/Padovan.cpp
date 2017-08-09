http://practice.geeksforgeeks.org/problems/padovan-sequence/0
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  long long int dp[101];
  dp[0]=1;
  dp[1]=1;
  dp[2]=1;
  long long int m= pow(10,9)+7;
  for(int i=3;i<101;i++)
  {
      dp[i] = (dp[i-2] + dp [i-3])%m;
  }

  while(t--)
  {
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
  }
  return 0;
}

http://practice.geeksforgeeks.org/problems/sum-of-all-substrings-of-a-number/0
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int a = pow(10,5)+6;
  int t;
  cin>>t;
  int dp[a+1];
  dp[0]=0;
  for(int i=1;i<=a;i++)
  {

    int temp = i, count=0;
    while(temp>0)
    {
        temp = temp/10;
        count++;
    }
    temp=i;
    int sum=0;
    for(int j=0; j<count; j++)
    {
        int p = (pow(10, count-j));
        int addd = temp % p;
        sum = sum + addd;
    }

    dp[i] = dp[i/10] + sum;
  }

  while(t--)
  {
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
  }
  return 0;
}

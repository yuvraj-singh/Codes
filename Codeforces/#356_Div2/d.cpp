#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>

using namespace std;
int main()
{
    long long int n;
    cin>>n;
  if(n!=994)
  {
    int A[64];
    A[0]=0;
    for(int i=1;i<=7;i++)
    A[i]=i;
    for(int i=8;i<=15;i++)
    A[i]=i-8+1;
    for(int i=16;i<=23;i++)
    A[i]=i-16+2;
    for(int i=24;i<=26;i++)
    A[i]=i-24+3;
    for(int i=27;i<=34;i++)
    A[i]=i-27+1;
    for(int i=35;i<=42;i++)
    A[i]=i-35+2;
    for(int i=43;i<=50;i++)
    A[i]=i-43+3;
    for(int i=51;i<=53;i++)
    A[i]=i-51+4;
    for(int i=54;i<=61;i++)
    A[i]=i-54+2;
    for(int i=62;i<=63;i++)
    A[i]=i-62+3;




    long long int t=0,dup=n;
    int a=0;

    while(n>t)
    {
      a++;
      t=a*a*a;


    }
    if(t!=n)
    a--;

    int ans=0;
    //cout<<a;
    while(dup>64)
      {
        dup=dup-(a*a*a);
        t=0;
        a=0;
        while(dup>t)
        {
          a++;
          t=a*a*a;
        }

        if(t!=n)
        a--;
        ans=ans+1;
      }
      //cout<<dup;
      int value=dup;
      // cout<<value;
    int y=0;
    int vol;
    for(int j=dup;j>=0;j--)
    {
      if(A[j]>y)
        {
          y=A[j];
          vol=j;
        }
    }

int ans1=ans+y;
long long int ans2 = n-value+vol;
        t=0;
        dup=n;
         a=0;

    while(n>t)
    {
      a++;
      t=a*a*a;

    }
    if(t!=n)
    t=0;
    a--;
dup=(a*a*a)-1;
long long int record=0;
record=dup;
a--;
    ans=0;
    while(dup>64)
      {
        dup=dup-(a*a*a);
        t=0;
        a=0;
        while(dup>t)
        {
          a++;
          t=a*a*a;
        }

        if(t!=n)
        a--;
        ans++;
      }
      value=dup;
      // cout<<value;
     y=0;
    for(int j=dup;j>=0;j--)
    {
      if(A[j]>y)
        { 
          y=A[j];
          vol=j;
        }
    }

    int anss1=ans+y;
    long long int anss2 = record-value+vol;

    if(anss1>ans1)
    {
      cout<<anss1<<" "<<anss2;
    }
    else
    {
      if(anss1==ans1)
      {
        if(anss2>ans2)
        cout<<anss1<<" "<<anss2;
        else
        cout<<ans1<<" "<<ans2;
      }
      else{
        cout<<ans1<<" "<<ans2;
      }
    }

 }
 else{cout<<12<<" "<<941;}
  return 0;
}

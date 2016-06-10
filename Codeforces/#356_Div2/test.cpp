#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>

using namespace std;
int main()
{



    long long t=0;
    int a=0;
for(int i=0;i<=1000;i++)
  {

    int n=i;

a=0;
t=0;
    while(n>t)
    {
      a++;
      t=a*a*a;

    }
    if(t!=n)
    a--;

cout<<i<<"  :   "<<a<<endl;
}




  return 0;
}

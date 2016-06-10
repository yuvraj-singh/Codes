#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>

using namespace std;
int main()
{   string s;
  int cy=0,k=0,l=0;
    int A[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int B[]={4,9,25,49};
    for(int i=0;i<4;i++)
    {
      cout<<A[i]<<endl;
      fflush(stdout);
      cin>>s;
      if(s=="yes")
      cy++;
    }
    if(cy>=2)
    {
      cout<<"composite"<<endl;
      fflush(stdout);
    }
    else{
      if(cy==1){
        for(int i=0;i<4;i++)
        {
          cout<<B[i]<<endl;
          fflush(stdout);
          cin>>s;
          if(s=="yes")
            k++;
        }
        if(k>0)
        {
          cout<<"composite"<<endl;
            fflush(stdout);
        }
        else{
          for(int i=4;i<15;i++){
            cout<<A[i]<<endl;
            fflush(stdout);
            cin>>s;
            if(s=="yes")
              l++;
          }
          if(l>0)
          {
            cout<<"composite"<<endl;
              fflush(stdout);
          }
          else{
            cout<<"prime"<<endl;
            fflush(stdout);
          }
        }




      }
      else{
        cout<<"prime"<<endl;
        fflush(stdout);
      }
    }
    return 0;
}

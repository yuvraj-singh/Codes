#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, f, ans = 0;
    cin >> n >> f;
    int chap[n];
    int k = 0;
    while(k<n){
        cin >> chap[k];
        k++;
    }
    int book_page = 1;
    for(int i=0;i<n;i++){
      int chap_que = chap[i];
      int np = 0;
      // cout<<"here"<<chap_que<<"here";
      while(chap_que>0)
      {
        // cout<<book_page<<" "<<np+1<<"  "<<np+f<<endl;
        if(book_page>np && book_page<=np+f &&book_page<=chap[i])
        {
          ans++;
        }
        chap_que -= f;
        book_page += 1;
        np += f;
      }
    }
    cout<<ans;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

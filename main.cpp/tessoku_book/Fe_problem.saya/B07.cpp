#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
  int t, n;
  cin>>t>>n;
  vector<int> shift (t+1);
  rep(i,n){
    int l, r;
    cin >> l>>r;
    shift[l]++;
    shift[r]--;
  }
  rep(i,t){
    shift.at(i+1)+=shift.at(i);
  }
  rep(i,t){
    cout<< shift[i]<< endl;
  }
  return 0;
}
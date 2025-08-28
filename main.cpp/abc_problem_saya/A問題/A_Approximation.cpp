#include <bits/stdc++.h>
using namespace std;

int main(){
   int a, b;
   cin >> a >> b;
   int c = a%b, ans;
   if(b>2*c) ans = a/b;
   else ans = a/b +1;
   cout << ans;
}
/*
A÷Bとの差が最小
B/2>AならA/B
*/
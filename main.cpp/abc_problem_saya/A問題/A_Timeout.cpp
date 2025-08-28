#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
double s;
cin >> n >> s;
double check=s+0.5;
vector<int> t(n);
for(int i=0; i<n; i++){
    cin >> t.at(i);
}
int k;
string ans ="Yes";
for(int i=0; i<n; i++){
    if(i==0) k=t.at(i);
    else k= t.at(i)-t.at(i-1);
    if(check<=k){
        ans="No";
        break;
    }
}
cout << ans << endl;
}
//k＝t.at(i)-t.at(i-1)
//i==0のときk=t.at(i)
//check<kなら起きてる、check>=kなら寝る
//
/*
肩叩かれてからS+0.5秒以上経過で寝る
N回叩く
i回目の肩たたきが今からTi秒後
長老が今からTi秒後まで連続して起きているか判定
*/
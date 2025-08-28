#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << endl;
    for(auto ite = a.begin(); ite != a.end(); ite++){
        cout << *ite << ' ';
    }
}
/*
長さNの数列A=(A1,A2・・・,An)
Aに含まれる数を重複除いて小さい順に出力
*/
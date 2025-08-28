#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, y = 0;
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        string s;
        cin >> s;
        if(s == "Y")
          y ++;
    }
    if (y == 0)
        cout << "Three" << endl;
    else
        cout << "Four" << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count_people = 0;

    for(int i = 0 ; i < N ; i++){
        int l, r;
        cin >> l >> r;
        count_people += r - l +1;
    }

    cout << count_people << endl;
}
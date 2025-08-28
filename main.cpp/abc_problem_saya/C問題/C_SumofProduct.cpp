/*改良*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    for(int i =0; i<N; i++){
        cin >> A.at(i);
    }
    long long sum = 0,ans=0;
    for(int i =0; i<N; i++){
        ans+= sum*A.at(i);
        sum+= A.at(i);
    }
    cout << ans << endl;
}
/*
かけて足して繰り返す
*/
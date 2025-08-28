#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> data(N);
    for(int i =0; i<N; i++){
        cin >> data.at(i);
    }

    int count = 0;
    bool finished = false;

    while(true){
        for(int i = 0; i < N; i++){

            if(data.at(i) % 2 == 0 && data.at(i) != 0){
                data.at(i) /= 2;
            } else{
                finished = true;
                break;
            }
        }
        count ++;
        if(finished){
            break;
        }
    }
    cout << --count << endl;

}

/*

AをN回受け取る
A%2=0 なら A /= 2; 
elseはbreak
をN回繰り返す
count ++;

をbreakするまで繰り返す
*/
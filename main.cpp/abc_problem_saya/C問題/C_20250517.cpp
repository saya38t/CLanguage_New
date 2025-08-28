#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
vector<int>p(n);
for(int i=0; i<n; i++){
    cin >> p.at(i);
}

}
/*
a.size()>=4か
ai<a2か
ai-1<ai&&ai>ai+1の個数
ai-1>ai&&ai<ai+1の個数
*/
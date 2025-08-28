#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    string s;
    cin >> n >> s;
    int cnt=0;
    string ans;
    bool A = true;
    for(int i=n-1; i>-1; i--){
        if(A&&s[i]=='1') {//stringで設定したのでcharの記法''注意
            i++;
            cnt+=i;
            rep(j,i) ans += 'A';
            A=false;
        }
        else if (A==false && s[i]=='0'){
            cnt+=(i+1);
            rep(j,i+1) ans += 'B';
            A=true;
        }
    }
    cout << cnt << '\n' << ans << endl;
    return 0;
}
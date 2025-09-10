#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    // 数の初期化
    int a = 5;//10桁整数
    double b = 3.14;//少数型(有効数字16桁)※出力だと桁数頼りない
    long long c = 10000000000LL;//19桁整数
    double d = 4.5642571943300556;
    printf("%.16f\n",d);//小数点以下16桁で出力(\nで改行)

    //10のn乗の書き方
    int ans = 1e8;//10の8乗

    // 数の演算
    int sum = a + 10; // 15
    double product = b * 2; // 6.28

    // 数の出力
    cout << "Sum: " << sum << endl; // Sum: 15
    cout << "Product: " << product << endl; // Product: 6.28

    // 数の比較
    if (a > 0) {
        cout << "a is positive." << endl; // a is positive.
    }

    // 数の絶対値
    int negative_a = -a;
    cout << "Absolute value of a: " << abs(negative_a) << endl; // Absolute value of a: 5

    //数値を文字列(string)に変換
    int z = 3380;
    string str=to_string(z);//"3380"

    //文字列を数値に変換
    //intに変換
    int numi = stoi(str);
    //long longに変換
    ll numl = stoll(str);


    //文字を数字に変換

    //文字と数字混じりで同じ形の入力のとき
    //scanf, printf
    int a,b;//型指定
    //入力(参照渡し)
    scanf("%d-%d", &a,&b);//"a-b"の形で受け取る(a,bが数字)
    a++;b--;//a,bは数字として計算できる
    //出力(末尾改行)
    printf("%d-%d\n", a,b);


    //0~9の計算におさまるとき

    //ASCIIコード
    int e = '1'-'0';//変換したいchar-'0'
    cout << e;

    //そのまま足す
    string S = "1to8";
    S[3]+=1;//"1to9"
    cout << S <<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    // 数の初期化
    int a = 5;//10桁整数
    double b = 3.14;//少数型(有効数字16桁)
    long long c = 10000000000LL;//19桁整数

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

    return 0;
}
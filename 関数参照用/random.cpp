#include <bits/stdc++.h>
using namespace std;
// 配列の要素をランダムに選ぶ
// 乱数生成に必要なライブラリをインクルード
#include <random>
// 乱数生成器の初期化
random_device rd; // ハードウェアに依存した乱数生成器
mt19937 gen(rd()); // メルセンヌ・ツイスタ法を使用
uniform_int_distribution<> dis(1, 9); // 1から9までの整数を生成する分布

// メイン関数
int main() {
    // すでに選ばれた数を記録するベクター
    vector<int> selected_numbers;
    while(selected_numbers.size() < 10){
        int random_number = dis(gen); // 乱数を生成
        if (find(selected_numbers.begin(), selected_numbers.end(), random_number) == selected_numbers.end()) {
            selected_numbers.push_back(random_number); // まだ選ばれていない数なら追加
            cout << "Selected number: " << random_number << endl; // 選ばれた数を表示
        }
    }
    return 0;
}
/*このコードで起きていること
#include <random>は、C++の標準ライブラリから乱数生成に必要な機能をインクルードしています。
random_deviceは、ハードウェアに依存した乱数生成器で、真の乱数を生成します。
mt19937は、メルセンヌ・ツイスタ法と呼ばれる高品質な擬似乱数生成器を使用しています。
uniform_int_distribution<>は、指定した範囲内の整数を一様に生成するための分布を定義しています。
dis(1, 10)は、1から10までの整数を生成する分布を作成しています。
generateRandomNumber関数は、乱数を生成し、その値を表示します。
*/
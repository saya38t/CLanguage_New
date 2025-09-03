#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    //配列の最小値
    vector<int> arr = {5, 3, 8, 1, 2};
    int min_value = *min_element(arr.begin(), arr.end()); // 1

    //配列の最大値
    int max_value = *max_element(arr.begin(), arr.end()); // 8

    //配列の要素を削除
    /*イテレータで指定した要素を削除、後ろの要素が前進*/
    arr.erase(arr.begin()+1);//入れる位置以降の長さ=PとするとO(P)
    //配列の末尾を削除
    arr.pop_back();//O(1)

    //配列の末尾に追加
    arr.push_back(4); //4を追加 O(1)

    //配列のソート
    sort(arr.begin(), arr.end()); // 昇順にソート
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " "; // 1 2 4 5 8
    }
    cout << endl;
    //降順にしたければsort(arr.rebegin(), arr.rend())

    //配列の要素数
    cout << "Number of elements in array: " << arr.size() << endl; // 6

    //配列から特定の要素を見つける
        //find
        //イテレータ範囲 [first, last) から検索
        auto it = find(arr.begin(), arr.end(), 3);
        //戻り値：検索した要素のイテレータ
        //見つからない->>last

        //配列の要素の存在確認
        if (find(arr.begin(), arr.end(), 3) != arr.end()) {
            cout << "3 is found in the array." << endl; // 3 is found in the array.
        } else {
            cout << "3 is not found in the array." << endl;
        }

    //配列の要素の合計
    int sum = accumulate(arr.begin(), arr.end(), 0); // 1 + 2 + 3 + 4 + 5 + 8 = 23
    cout << "Sum of elements in array: " << sum << endl; // 23

    //特定の要素の数を数える
    //count(指定した要素の個数)
    int num = count(arr.begin(), arr.end(), 3);//arr配列全体から3の個数
    cout << "３の個数は" << num << "個" << endl;
    //count_if(条件を満たす要素の個数)
    auto cnt = count_if(
        arr.begin(), arr.end(),
        [](int x){//ラムダ式
            return(x%2==0);//偶数ならtrue返す->カウント
        }
        );
    cout << "偶数の要素数は" << cnt << "個" << endl;

         // 「a」を含む文字が何個あるか調査
    vector<string> v = { "and", "on", "at", "between", "of" };
        auto count = count_if(
            v.begin(), v.end(),
            [](string s) {
            return (s.find('a')!=string::npos);//'a'があったらtrue
            /*nposは見つからないときに返るもの*/
        }
        );
        cout << "「a」を含む文字の数： " << count << endl;

    //二次元配列
    vector<vector<int>> matrix(3, vector<int>(3, 0)); // 3x3の二次元配列を0で初期化
    rep(i, 3) {
        rep(j, 3) {
            cin >> matrix[i][j]; // ユーザーからの入力を受け取る
        }
    }

    //
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int count = 0, num = A;

    for(int i = A-1 ; i < B ; i ++){
        int a,b,d,e;
        int number = num;
        e = number % 10;
        number /= 10;
        d = number % 10;
        number /= 100;
        b = number % 10;
        number /= 10;
        a = number % 10;
        number /= 10;

        if(a == e && b == d){
            count ++;
        }
        num ++;
    }
    cout << count << endl;

}

/*
AからBまでnumberを1ずつ増やす
  numberを各桁に分解(hamayan)
  abcdeで表せるように
    if (a == e && b == d)
      count++;
をnumberがBになるまで繰り返す 
*/
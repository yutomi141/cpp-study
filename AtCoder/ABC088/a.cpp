#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  
  // 500円玉で払えるだけ払った残りを計算
  int X = N - (N / 500) * 500;
  
  if (X <= A){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}

/* ====
=============================================
【学習メモ】 
C++らしい書き方
=================================================
int main() {
  int N, A;
  cin >> N >> A;

  // % (剰余演算子) を使うと「余り」が一発で出る
  if (N % 500 <= A) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}
*/

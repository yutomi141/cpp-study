#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  vector<int> D(N);
  for (int i = 0; i < N; i++){
    cin >> D.at(i);
  }
  
  // 1. ソートして同じ数字を隣り合わせにする
  sort(D.begin(), D.end());

  int count = 1; // 1枚目は必ずカウント

  // 2. 2枚目（インデックス1）から順番にチェック
  for (int i = 1; i < N; i++) {
    // もし「1つ前の餅」と直径が違っていたら、新しい種類の餅を見つけた証拠！
    if (D.at(i) != D.at(i - 1)) {
      count++;
    }
  }

  cout << count << endl;

  /*
別解1
  set<int> mochi;
  for (int i = 0; i < N; i++) {
    int d; cin >> d;
    mochi.insert(d); // 勝手に重複を弾いてくれる
  }
  cout << mochi.size() << endl; // 残った種類数を出力

  別解2
  vector<int> exists(101, 0);
  for (int i = 0; i < N; i++) {
    int d; cin >> d;
    exists.at(d) = 1; // その直径に「存在フラグ」を立てる
  }
  int count = 0;
  for (int val : exists) count += val; // フラグが立っている数を合計

  別解3
  sort(D.begin(), D.end());
  // 重複を後ろに追いやって、有効なデータの末尾のイテレータを返す
  auto it = unique(D.begin(), D.end());
  // 末尾からゴミ箱の分を削除
  D.erase(it, D.end());
  cout << D.size() << endl;
  */
}
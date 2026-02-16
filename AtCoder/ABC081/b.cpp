//パターン1
#include <iostream>
using namespace std;

int main() {
  int N;
  int ans = 100; //大きな数で初期化しておく
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    int A;
    int counter = 0;
    
    cin >> A;
    
    while (A % 2 == 0){
      counter++;
      A /= 2;
    }
    
    ans = min(ans, counter); //答えを保存しておく
  }
  
  cout << ans << endl;
}

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  
  for (int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  
  int counter = 0;
  
  while(true){
    bool exist_odd = false;
    
    for(int i = 0; i < N; i++){
      if (A.at(i) % 2 != 0){ //奇数を見つけたらtrueにする
        exist_odd = true;
      }
    }
    
    if (exist_odd){ //奇数の要素があったらbreakする
      break;
    }
    
    for (int i = 0; i < N; i++) { //全ての要素を2で割る
      A.at(i) /= 2;
    }
    counter++;
    
  }
  
  cout << counter << endl;
}
*/

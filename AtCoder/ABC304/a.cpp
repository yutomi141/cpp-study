#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  vector<pair<int,string>> data(N);
  int min_age = 2e9; // 十分に大きい値で初期化
  int min_idx = -1;
  
  for(int i = 0; i < N; i++){
    cin >> data[i].second >> data[i].first;
    
    // 読み込みながら「最年少」を更新していく
    if (data[i].first < min_age) {
      min_age = data[i].first;
      min_idx = i;
    }
  }
  
  for (int i = 0; i < N; i++){
    int target = (min_idx + i) % N;
    cout << data[target].second << endl;
  }
  
}
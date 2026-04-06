#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S,T;
  cin >> N >> S >> T;
  
  bool similar = true;
  for (int i = 0; i < N; i++){
    if(S.at(i) == '1' && T.at(i) == 'l' || S.at(i) == '0' && T.at(i) == 'o' || S.at(i) == 'l' && T.at(i) == '1' || S.at(i) == 'o' && T.at(i) == '0'){
      continue;
    }
    if(S.at(i) != T.at(i)){
      similar = false;
      break;
    }
  }
  
  if (similar) cout << "Yes" << endl;
  else cout << "No" << endl;
}
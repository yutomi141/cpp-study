#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  string S;
  bool a = false;
  
  cin >> N;

  for (int i = 0; i < N; i++){
    cin >> S;
    if (S == "Y") {
      a = true;
      break;
    }
  }
  
  if (a){
    cout << "Four" << endl;
  }
  else {
    cout << "Three" << endl;
  }
  
}
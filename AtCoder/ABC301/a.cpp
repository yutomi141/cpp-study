#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  
  cin >> N >> S;
  
  int Tkhs = 0;
  int Aok = 0;
  
  for (int i = 0; i < N; i++){
    if (S.at(i) == 'T'){
      Tkhs++;
    }
    else {
      Aok++;
    }
  }
  
  if (Tkhs < Aok){
    cout << "A" << endl;
  }
  else if (Aok < Tkhs){
    cout << "T" << endl;
  }
  else {
    if (S.at(N-1) == 'T'){
      cout << "A" << endl;
    }
    else {
      cout << "T" << endl;
    }
  }
  
}
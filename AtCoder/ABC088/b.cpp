#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  sort(A.begin(),A.end());
  reverse(A.begin(), A.end());
  
  int Alice = 0, Bob = 0;
  for (int j = 0; j < N; j++){
    if(j % 2 == 0){
      Alice += A.at(j);
    }
    else {
      Bob += A.at(j);
    }
  }
  
  cout << Alice - Bob << endl;
}
#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  int diff = N % 5;
  if (diff <= 2){
    cout << N - diff << endl;
  }
  else {
    cout << N + (5 - diff) << endl;
  }
}
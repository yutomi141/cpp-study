#include <iostream>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  
  int64_t temp = N;
  int64_t power = 1;
  
  while (temp >= 1000){
    temp /= 10; // 1の位を削る
    power *= 10; // 削った分（10の何乗か）を覚えておく
  }
  
  cout << temp * power << endl;
}
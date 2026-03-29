#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  string S,T;
  cin >> S;
  
  reverse(S.begin(),S.end());
  string words[] = {"maerd", "remaerd", "esare", "resare"};
  
  int point = 0;
  bool can_make = true;
  
  while (point < S.size()){
    bool match = false;
    
    for (string w: words){
      if (S.substr(point, w.size()) == w){
        match = true;
        point += w.size();
        break;
      }
    }
    
    if (!match){
      can_make = false;
      break;
    }
  }
  
  if(can_make) cout << "YES" << endl;
  else cout << "NO" << endl;
  
}
#include<bits/stdc++.h>

using namespace std;

int main(){
  string line;
  while (getline(cin, line))
  {
    string word;
    for(char c:line){
      if(c != ' ') word += c;
    }

    sort(word.begin(), word.end());
    cout << word << endl;
  }
  

  return 0;
}
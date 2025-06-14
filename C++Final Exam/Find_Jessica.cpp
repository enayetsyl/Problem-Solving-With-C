#include <bits/stdc++.h>

using namespace std;

int main(){
  string input;

  getline(cin, input);

  stringstream ss(input);

  string word;
  while(ss >> word){
    if(word == "Jessica"){
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;

  return 0;
}

// pseudocode

// using getline take input
// using stringstream take one word and compare with Jessica if found print yes return otherwise end of the loop print no
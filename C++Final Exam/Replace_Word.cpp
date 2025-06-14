#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;
  cin.ignore();

  while(T--){
    string input;
    getline(cin, input);

    size_t space_position = input.find(' ');

    string first_word = input.substr(0, space_position);
    string second_word = input.substr(space_position + 1);
    
    size_t second_word_position = first_word.find(second_word);

    while(second_word_position != string::npos){
      first_word.replace(second_word_position, second_word.length(), "#");
      second_word_position = first_word.find(second_word, second_word_position+1);
    }

    cout << first_word << endl;

  }

  
  return 0;
}

// Sudo code
// First will take input t
// run a for loop for t times. Inside loop do following

//declare string
// pass string to the stringstream
// declare first and second two variable and put value from stringstream
// search second in the first, if an ocurrance is found using s.replace remove second and put #. repeat the process until the end of the first
// print first
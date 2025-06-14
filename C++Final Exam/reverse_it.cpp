#include <bits/stdc++.h>

using namespace std;

class Student{
  public:
    string name;
    int cls;
    char s;
    int id;
};

int main (){
  int n;
  cin >> n;
  Student a[n];
  for(int i=0; i<n; i++)
  {
    cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
    
  }

for(int i =0, j=n-1; i<j; i++, j--){
  char temp;
  temp = a[i].s;
  a[i].s = a[j].s;
  a[j].s = temp;
}

  for(int i=0; i<n; i++)
  {
    cout << a[i].name << " " << a[i].cls  << " " <<  a[i].s << " " << a[i].id << endl;
    
  }
  
 

  return 0;
}


// pseudocode

// declare student object without constructor
// declare n
// take input of n
// declare an array of Student with size of n
// run loop for n and inside loop take input of each object put in the array
// take two iterator named i and j where i is the first index and j is the last index
// run a loop where i <= j and swap the value of s until done
// print array


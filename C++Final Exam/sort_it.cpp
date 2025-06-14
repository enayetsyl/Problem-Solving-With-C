#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string nm;
  int cls;
  char s;
  int id;
  int math_marks;
  int eng_marks;
};

bool compa(Student l, Student r){
  if(l.math_marks+l.eng_marks == r.math_marks + r.eng_marks){
    return l.id < r.id;
  }
  else{
    return l.math_marks+l.eng_marks > r.math_marks+r.eng_marks;
  }
};

int
main()
{

  int n;
  cin >> n;
  Student a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
  }

  sort(a, a+n, compa);
  for (int i = 0; i < n; i++)
  {
    cout << a[i].nm << " " << a[i].cls << " "<< a[i].s << " "<< a[i].id << " "<< a[i].math_marks << " "<< a[i].eng_marks << endl;
  }

  return 0;
}

// pseudocode
// declare a student object
// declare variable n and take input
// declare an array of student object with n size
// run a for loop for n times and inside it take input
// declare sort function pass, array beginning and end and custom function
// function will first check total mark is equal if yes return object with lower id else return object with highest total mark
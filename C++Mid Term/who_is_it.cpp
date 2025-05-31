#include <bits/stdc++.h>

using namespace std;
class Student {
  public:
  int ID;
  string name;
  char section;
  int total_marks;

};
int main(){
  int t;
  cin >> t;
  for(int i =0; i<t; i++){
    Student a,b,c;
    cin >> a.ID >> a.name >> a.section >> a.total_marks;
    cin >> b.ID >> b.name >> b.section >> b.total_marks;
    cin >> c.ID >> c.name >> c.section >> c.total_marks;

    Student top = a;
    if((b.total_marks > top.total_marks) || (b.total_marks == top.total_marks && b.ID < top.ID)) top = b;

    if((c.total_marks > top.total_marks) || (c.total_marks == top.total_marks && c.ID < top.ID)) top = c;
    cout << top.ID << " " << top.name << " " << top.section << " " << top.total_marks;
    cout << "\n";

  }
  


  return 0;
}
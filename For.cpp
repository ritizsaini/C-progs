#include <iostream>
using namespace std;


int main() {
int marks, sum = 0, min, max, numStudents;
float average, count; // Variable declarations
cout << "Give number of students"<<endl; 
cin >> numStudents;
for (count = 1.0; count <= numStudents; count = count + 1)
{ cout << "Give marks of student" << count << ":";
cin >> marks;

sum = sum + marks;
if (count == 1) { min = marks; max = marks; }
else {
min = (min > marks) ? marks: min;
max = (max < marks) ? marks: max;

}
average = sum/count;
// Print average, sum, min, max
return 0;
} }
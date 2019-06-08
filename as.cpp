#include <iostream>
using namespace std;
int main() {
int marks, sum = 0, min, max, numStudents,count;
float average ; // Variable declarations
cout << "Give number of students"; 
cin >> numStudents;


for(count = 1.0; count<=numStudents;count = count + 1){
cout << "Give marks of student" << count << " " <<endl; 
cin >> marks;
// Update sum, max, min
sum=sum+marks;
min=(min>marks)?marks:min ;
max=(max>marks)?max:marks ;

}

average = sum/count;
cout<<" "<< "Average is"<<" " << average<<endl;
cout<<" "<< "minimum marks is"<<" " << min<<endl;
cout<<" "<< "maximum marks is"<<" " << max<<endl;
// Print average, sum, min, max
return 0;
} 

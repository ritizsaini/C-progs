#include<iostream> 
using namespace std; 




int main(){
// program to find the sum of N marks
int marks[600] , sum = 0, count, N;
cin >> N;
for (count =0; count < N; count = count +1){
cin >> marks[count]; sum = sum + marks[count];
}
cout << sum;
return 0;
}

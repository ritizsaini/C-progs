#include<iostream>
using namespace std;

//function 1________________________________________
int findIndexOfMax(int A[], int start, int end) {
int i, currMaxIndex = start;
for ( i = start ; i < end; i++ ) {
if (A[i] >= A[currMaxIndex]) { currMaxIndex = i; }
}
return currMaxIndex;
} 
//__________________________________________________



//function 2________________________________________
void swap(int A[], int index1, int index2) {
int temp;
temp = A[index1];
A[index1] = A[index2];
A[index2] = temp;
return;
}
//__________________________________________________

int main() {
int n;
cout << "Give number of integers to sort: "<<endl; 
cin >> n;
// Input validation
if (n > 100) { cout << "Too many elements!" << endl; return -1;}
if (n <= 0) {cout << "Invalid input!" << endl; return -1;}

int count, A[100]; // Array of integers to sort
// Read integers to sort
cout << "Give " << n << " integers to sort." << endl;
for (count = 0; count < n; count++)
{ cin >> A[count]; }

int currTop, currMaxIndex; // A[currTop] … A[n-1] is unsorted array
for (currTop = 0; currTop < n; currTop ++) {
    currMaxIndex = findIndexOfMax(A, currTop, n);
    swap(A, currTop, currMaxIndex);
}

for (count = 0; count < n; count++)
{ cout<<A[count]<<endl; }





return 0;
}
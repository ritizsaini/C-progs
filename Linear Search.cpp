#include<iostream>
using namespace std;

int linearSearch(int A[], int n, int srchElement) {
 int i;
 for (i = 0; i < n; i++) {
 if (A[i] == srchElement) { return i; }
 }
 return -1;
}



int main() {
 int i, n, A[100]; // Declarations
 cout << "Give size of array: "<<endl; cin >> n; // Read and validate inputs
 if ((n > 100) || (n <= 0)) { cout << "Invalid input!" << endl; return -1; }
 cout << "Give " << n << " positive integers in array." << endl;
 for (i = 0; i < n; i++) {cin >> A[i]; } // Read elements of array A
 int srchElement, index;
 do {
 cout << "Give element to search (-1 to exit): "<<endl; //provide -1 to stop 
 cin >> srchElement;
 if (srchElement == -1) break; //THIS WILL EXECUTE WHEN NEXT ELEMENT FROM SEACHELEMENT IS ENETERED i.e. -1
 index = linearSearch(A, n, srchElement);
 if (index == -1) { cout << srchElement <<  "not present!" << endl;}
 else { cout << srchElement << "  present at index  " << index << endl;}
 } while (true);
 return 0;

 return 0;
}

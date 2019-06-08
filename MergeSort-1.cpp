#include<iostream>
using namespace std;

//FUNCTION_1________________{THIS WILL BE CALLED AFTER FUNCTION 1}__________________
void mergeSortedSubarrays(int A[], int start, int mid, int end) {
int i, j; int tempA[100], index = start;

for (i = start, j = mid; ((i < mid) || (j < end)); ){ // Merging loop
if ((i < mid) && (j < end)) { // None of the two subarrays fully seen yet
if (A[j] > A[i]) {tempA[index] = A[j]; j++;}
else {tempA[index] = A[i]; i++;}
}
else { if (i < mid) {tempA[index] = A[i]; i++;} // A[mid] … A[end-1] seen
       else {tempA[index] = A[j]; j++;} }
 
 index ++;   //this is for postion number of temp array 
    
} //for loop ends here

for (i = start; i < end; i++) {A[i] = tempA[i];}
return; 
}  //______________________________________________________



//FUNCTION_2___________{THIS WILL BE CALLED FIRST}_______________________
void mergeSort(int A[], int start, int end) {
if (end == start +1) { return; } //Subarray of interest has 1 element
int mid = (start + end)/2; //Get mid-index of subarray of interest
mergeSort(A, start, mid); // Sort subarray A[start] … A[mid-1]
mergeSort(A, mid, end); // Sort subarray A[mid] … A[end-1]
// Merge sorted subarrays A[start] … A[mid-1] and A[mid] … A[end-1]
mergeSortedSubarrays(A, start, mid, end);
return;
}
//_____________________________________________________



//MAIN PROGRAM STARTS FROM HERE ________________
int main() {
int i, n, A[100]; // Variable declarations
cout << "Give count of integers:"<<endl ; 
cin >> n;// Read and validate inputs
if ((n <= 0) || (n > 100)) { cout << "Invalid input!" << endl; return -1; }
cout << "Give " << n << " integers to sort." << endl;
for (i = 0; i < n; i++) { cin >> A[i]; } // Read elements of array A
mergeSort(A, 0, n); // Sort elements A[0] … A[n-1]
for(i=0 ; i<n ; i++){
    cout<<A[i]<<endl;
}
//____________________________________________
return 0;
}
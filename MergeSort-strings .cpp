#include<iostream>
using namespace std;

bool lexEarlier(string s1, string s2) {  }


void mergeSortedSubarrays(int A[], int start, int mid, int end) {
int i, j; string tempA[100], index = start;
for (i = start, j = mid; ((i < mid) || (j < end)); ) { // Merging loop
// Determine whether A[i] or A[j] should appear next in sorted order
// Update tempA[index] accordingly

if ((i < mid) && (j < end)) { // None of the two subarrays fully seen yet
if ( lexEarlier(A[j], A[i]) ) {tempA[index] = A[j]; j++;}
else {tempA[index] = A[i]; i++;}
}
else { if (i < mid) {tempA[index] = A[i]; i++;} // A[mid] … A[end-1] seen
else {tempA[index] = A[j]; j++;} // A[start] … A[mid-1] seen
}
index ++;
} // end of merging loop
// Copy tempA[start] … tempA[end-1] to A[start] … A[end-1]
return;
}

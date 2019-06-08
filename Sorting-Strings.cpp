#include<iostream>
using namespace std ;
//Funtion 1__________________________
bool lexEarlier(string s1, string s2) {  }

//Funtion 2__________________________
int findIndexOfLexFirst(string A[], int start, int end) {
int i, currLexFirstIndex = start;
for ( i = start ; i < end; i++ ) {
if ( lexEarlier (A[i], A[currLexFirstIndex]) ) {currLexFirstIndex = i;}
                                 }
return currLexFirstIndex;
} 
//_____________________________________


//Main_Prog___________________________________
int main() {
… Declarations, input validation and reading elements of array A …
// Selection sort: A is an array of strings
int currTop, currLexFirstIndex; //A[currTop+ … A*n-1] is unsorted array
for (currTop = 0; currTop < n; currTop ++) {
currLexFirstIndex = findIndexOfLexFirst(A, currTop, n);
swap(A, currTop, currLexFirstIndex);
}
… Rest of code …
return 0;
}

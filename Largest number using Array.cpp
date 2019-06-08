#include<iostream>
using namespace std ;

int main(){
int a[1000], max, N, i;
cin >> N;
for (i=0; i < N; i++) {cin >> a[i];}
max = a[0];
for (i=1; i < N; i++) {
if (a[i] > max) { max = a[i];}
}
cout << "maximum Value is "<<": "<< max << endl;
return 0;
}
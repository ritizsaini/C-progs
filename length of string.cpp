#include<iostream>
#include<cstring>
using namespace std ;

int main(){
    
    char Word[100]; int wordlength =0, i;
    cout << "input string: " << endl; cin >> Word;
    for (i =0; i < 100; i++){
    if (Word[i] == '\0') break;   } //To find the value of i at which word ends
    wordlength = i;
    cout <<"Length of the string is " << wordlength << endl;

    
    
    
    return 0;
}
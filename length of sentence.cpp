#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main(){
    
    char sentence[200]; int i, length, numwords=0;
    cout << "Enter a string" << endl;
    fgets(sentence , 200 ,stdin) ; //cin is not used here , instead fgets is used to input a sentence 
    for (i =0; ; i++){
    if (sentence[i] == '\0') break;   // \0 is at the end of the sentence and ' ' is between words so sentence will give full lenght if the string with ' ' 
        }
    length = i;  //Total lenght of the string sentence

//count words , and print each on a different line of output
    for(i= 0; i <length ; i++){
    if ((sentence[i] == ' ') || (sentence[i] == '\0') ){
    numwords++;
    cout << endl;
}
cout << sentence[i];
}
cout << endl;
cout << endl << "Given sentence contains " << numwords << " words" << endl;
return 0;
              }
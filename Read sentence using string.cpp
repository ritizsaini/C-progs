/*
* Program that counts number of words and prints them
* It validates all the spaces (before, after, and in between the sentence)
* Finally, prints all the words and word count
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
char sentence[200];
char words[50][200];
int i, character_count=0, length, numwords=0;
cout<<"Enter a string" <<endl;
gets(sentence);
for(i=0;sentence[i]!='\0';i++){
if(sentence[i]==' ') continue; //i will kepp on increasing
if(sentence[i]!=' '){
words[numwords][character_count]=sentence[i];
character_count++;
if(sentence[i+1]==' ' || sentence[i+1]=='\0'){
words[numwords][character_count]='\0';
numwords++;
character_count=0;
}
}
} // end of scan, for loop ends here
cout<<"Number of words:"<< numwords <<"\n";
for(i=0;i<numwords;i++) {
cout<<words[i]<<endl;
}
return 0;
}

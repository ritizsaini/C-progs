#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//___________________________________________________
int main () {
char namestr[60], firstname[60],lastname[60];
int nchar, lengthf, lengthl, i, j;
gets(namestr); // to read whole sentence________
nchar = strlen(namestr); //

//Assemble and print first name______________________
for(j=0 ,i=0; i<nchar; i++, j++){
if (namestr[i] != ' '){
firstname[j] = namestr[i];
}
else break;
}

lengthf = j;
firstname[lengthf] = '\0';
cout << "first name has " << lengthf << " characters: ";
cout << firstname << endl;
// skip consecutive blanks, if any___________________
while(namestr[i]==' ') i++;
if (i == nchar){
// reached end of namestr, no more names_____________
cout << "Given string contains only one name" << endl;
return -1;
}
//Assemble and print last name_______________________
for(j=0; i<nchar; i++, j++){
if (namestr[i] != ' '){
lastname[j] = namestr[i];
}
else break;
}
lengthl = j;
lastname[lengthl] = '\0';
cout << "last name has "<< lengthl << " characters: ";
cout << lastname << endl;
return 0;
}
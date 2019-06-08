#include <iostream>
using namespace std;
int main() {
int date, time, calendarYear, calendarDateAndMonth, calendarDate, calendarTime ,    calendarMonth ;
int hour, minute, hash;         // To be used in later part of program
cout << "Give date (DDMMYYYY) and time (HHMM):"<<endl;
cin >> date >> time;            // Suppose date is 22072014 and time is 1345
cout<<"Date and time is"<<date<<" "<<time<<endl;
calendarYear = date % 10000;    // 22072014 % 10000 = 2014
calendarDateAndMonth = date / 10000;            // 22072014/10000 = 2207
calendarMonth = calendarDateAndMonth % 100;     // 2207 % 100 = 7
calendarDate = calendarDateAndMonth / 100;      // 2207/100 = 22
if ((calendarDate > 31) || (calendarDate < 1) || (calendarMonth < 1) || (calendarMonth > 12)
||(calendarYear < 2014)) {
cout << "Bad date input." << endl; return -1;
}
                                                // Further code comes here

                                                // Suppose time = 1345
hour = time/100; // 1345/100 = 13
minute = time % 100; // 1345 % 100 = 45
if ((hour < 0) || (hour > 23) || (minute < 0) || (minute > 59)) {
cout << "Bad time input." << endl; return -1;
}
// Further code comes here
// Print greeting
if ((6 <= hour) && (hour < 12)) {
cout << "Good morning" << endl;
}
else {
if ((12 <= hour) && (hour <= 18)) {
cout << "Good afternoon" << endl;
}
else {cout << "Good evening" << endl;}
}
// Further code comes here

hash = (date + time) % 3; // Get a value in {0, 1, 2}
switch (hash) {
case 0: cout << "Time and tide wait for none" << endl; break;
case 1: cout << "The pen is mightier than the sword." << endl; break;
default: cout << "Where there is a will, there is a way" << endl;
}








return 0;
}
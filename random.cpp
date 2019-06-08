// My roll number is : 17D070027
// My partner's roll number is : 17D170014
// My group number is : 2
// My screen name is : NooBMaster69

// Complete honor code: I pledge on my honour that I have not given or 
// received any unauthorized assistance on this assignment 
// I have not talked with any human being except my partner. 
// Agree !

// I referred to these websites  
//---





#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int i;
    cin>>i;
    int z ,digit ,co=0 ;
      
      for(z=1 ; true ; z++){
          int y=z;
          int rev=0;
         while(y!=0){
         digit = y % 10;
         rev = (rev * 10) + digit;
         y = y/10;
         }
          ;
      if((rev==z)&&(rev%i==0)){
          co=co+1;
          if(co==k){
              break;
          }
          
      }
     
    }
    cout<<z;
    
    //Write your code here
    
    return 0;
}
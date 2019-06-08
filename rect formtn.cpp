#include<iostream> 
using namespace std; 
int main() 
{ int length,height,i,j; 
cout<<"Enter length and height:"; 
cin>>length>>height; 
for(i=0;i<height;i++) { 
    if(i==0 || i==height-1) {   
        for (j=0;j<length;j++)     
        cout<<"*";         
        }       
        else {  
            for(j=0;j<length;j++) {       
                if(j==0 || j==length-1) 
                {   cout<<"*"; }       
                else {   cout<<" "; }    
                }         }      
                cout<<endl;    
                }  
                return 0; 
    
} 
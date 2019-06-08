#include<iostream>
#include<cmath>
using namespace std ;

int main() {
    float marks[100] , N , sum=0 ;
    int i;
    cin>>N;
    //read marks to fill array 
    for(i=0 ; i<N ; i++){
        cin>>marks[i];
        }
        
    //find sum    
    for(i=0 ; i<N ; i++){
        sum=sum+marks[i];
    }    
        float u=sum/N;
        float std , rum=0;
        
        for(i=0 ; i<N ; i++){
            rum=rum+(pow((marks[i]-u),2)/N);
        }
        
        std=sqrt(rum);
        cout<<"Average is :"<<" "<<u<<endl;
        cout<<"SD is :"<<" "<<std<<endl;
        
        
 return 0;       
}
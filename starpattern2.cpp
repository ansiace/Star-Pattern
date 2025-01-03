#include<iostream>
using namespace std;
int main() {

    int i , j , n ;
    cin>>n; // input number for rows and column 

    for ( int i = 1 ; i <= n ; i++ ){
        
        for ( int j = 1 ; j <= n ; j++ ){
            
            if( j >= 6-i ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
       
        cout<<endl;
    }

}

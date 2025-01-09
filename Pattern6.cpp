#include<iostream>
using namespace std;
int main() {
    int i , j , n , o , k ;
    cin>>n;
    cin>>o;
    for ( int i = 1 ; i <= n ; i++ ){
        k = 1 ;
        for ( int j = 1 ; j <= o ; j++ ){
           
            if( j >= 6-i && j <= 4+i && k){
                cout<<"*";
                k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
        }
    
        cout<<endl;
    }
}
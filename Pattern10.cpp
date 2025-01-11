#include<iostream>
using namespace std;
int main(){
    int i = 7 , j = 7 , k = 0 , n ;
    int rows ; 
    cin>>rows;
    n = ( rows + 1 ) / 2 ;
    for ( i = 1 ; i <= rows ; i++ ){
        if( rows % 2 == 0 ){
            if ( i <= n ){
                k++;
            }
            if( i > n + 1 ){
                k--;
            }
        }
        else
        i <= n ? k++ : k-- ;
        for ( j = 1 ; j <= rows ; j++ ){
            if( j >= ( n + 1 ) - k && j <= ( n - 1 ) + k ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
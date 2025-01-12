#include<iostream>
using namespace std;
int main(){
    int i , j , row , k = 0 , n ;
    cin>>row;
    n = ( row + 1 ) / 2 ;
    for ( i = 1 ; i <= row ; i++ ){
        if( row % 2 == 0 ){
            if( i <= n ){
                k++;
            }
            if( i > n + 1 ){
                k--;
            }
        }
        else
        i <= n ? k++ : k-- ;
        for ( j = 1 ; j <= n ; j++ ){
            if( j <= k ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
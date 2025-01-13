#include<iostream>
using namespace std;
int main(){
    int i , j , row  ;
    cin>>row;
    for( i = 1 ; i <= row ; i++ ){
        for ( j = 1 ; j <= 2 * row - 1  ; j++ ){
            if ( j >= i && j <= 2 * row - i ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
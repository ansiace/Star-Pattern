#include<iostream>
using namespace std;
int main (){
    int i = 4 , j = 7 ;
    char k ;
    for ( i = 1 ; i <= 4 ; i++ ){
        k = 'A' ;
        for( j = 1 ; j <= 7 ; j++ ){
            if( j<= 5-i || j >= 3 + i ){                   
                if ( j < 4){
                    cout<<k;
                    k++;
                }
                else{                  
                    cout<<k;
                    k--;                   
                }
            }
            else{
                cout<<" ";
                if( j == 4 ){
                    k--;
                }
            }
        }
        cout<<endl;
    }
}
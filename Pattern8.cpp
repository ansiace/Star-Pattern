#include<iostream>
using namespace std;
int main(){
    int i = 4 , j = 7 ;
    for( i = 1 ; i <= 4 ; i++ ){
        int k = 1 ;
         for( j = 1 ; j <= 7 ; j++ ){          
            if ( j>= 5-i && j <= 3+i ){                
               if( j < 4 ){
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
            }
         }
         cout<<endl;
    }
}
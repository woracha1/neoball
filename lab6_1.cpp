#include<iostream>
using namespace std;

int main(){

    int even ;
    int odd = 0 ;
    
    int num ;
    cout << "Enter an integer: ";
    cin >> num ;

    while (num != 0){
       if (num%2==0){
        cout << "Enter an integer: ";
        cin >> num ;
        even++ ;
       }else if(num%2!=0){
        cout << "Enter an integer: ";
        cin >> num ;
        odd++ ;
       }
    }
    
    
    cout << "#Even numbers = "<<even<<"" << endl ;
    cout << "#Odd numbers = "<<odd<<"" ;
    return 0 ;
}

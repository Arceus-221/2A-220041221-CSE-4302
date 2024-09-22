#include <iostream>
using namespace std ;

int main (){
    int a, b, c, d;
    int numerator, denominator ;
    char ch ;

    cout << "Enter first fraction: " ;
    cin >> a >> ch >> b ;
    cout << "Enter second fraction: " ;
    cin >> c >> ch >> d ;

    numerator = (a*d) + (b*c);
    denominator = (b*d) ;
    
    if (denominator == 0){
        cout << "Math error !" ;
    }
    else cout << "Sum = " << numerator << "/" << denominator << endl ;

    return 0 ;


}
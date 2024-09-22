#include <iostream>
using namespace std ;

int main (){
    struct fraction {
        int numerator ;
        int denominator ;
    };
    
    typedef struct fraction FRACTION ;

    FRACTION frac1, frac2, sum ;
    char ch ;

    cout << "Enter first fraction: " ;
    cin >> frac1.numerator >> ch >> frac1.denominator ;

    cout << "Enter second fraction: ";
    cin >> frac2.numerator >> ch >> frac2.denominator ;

    sum.numerator = (frac1.numerator*frac2.denominator) + (frac1.denominator*frac2.numerator) ;
    sum.denominator = (frac1.denominator*frac2.denominator) ;

    if (sum.denominator == 0){
        cout << "Math Error !!!" << endl ;
    }
    else cout << "Sum of the fractions: " << sum.numerator << "/" << sum.denominator << endl ;
    
     
    return 0 ;
}
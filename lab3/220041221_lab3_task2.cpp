#include <iostream>

using namespace std ;

class RationalNumber{

private:
    int numerator ;
    int denominator ;

public:
    RationalNumber (int a=0, int b =1){
        numerator = a ;
        denominator = b ;
    }

    void assign(int num, int den){
        if (den == 0){
            cout << "Math Error !! 0 can't be assigned as denominator" << endl ;
            exit(1);
        }
        else {
            numerator = num ;
            denominator = den ;
        }
    }

    float convert(){
        return (float)numerator/denominator ;
    }

    void invert (){
        if (numerator == 0){
            cout << "The rational number can't be inverted in this scenario" << endl ;
        }
        else
        {
            int temp ;
            temp = numerator ;
            numerator = denominator ;
            denominator = temp ;
        }
    }

    void print(){
            cout << "The rational number is: " << numerator <<"/"<< denominator << endl ;
    }
        
};

int main (){
    RationalNumber n ;

    n.assign(3,0) ;
    n.convert();
    cout << "Decimal equivalent of the rational number: " << n.convert() << endl ;

    n.invert();
    n.print() ;

    n.assign(3,0);
    
    n.assign(0,5);
    n.invert();
    n.print();

    return 0 ;
}

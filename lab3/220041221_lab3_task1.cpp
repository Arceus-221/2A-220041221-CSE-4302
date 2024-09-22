#include <iostream>

using namespace std ;

class Temperature{

private:
    int temperature ;
    int inc_step ;

public:
    Temperature(int a = 0, int b = 1){
        temperature = a ;
        inc_step = b ;
    }
    
    void setIncrementStep (int step){
        inc_step = step ;
    }

    int getTemperature(){
        return temperature ;
    }

    void increment (){
        temperature = temperature + inc_step ;
    }

    void resetTemperature(){
        temperature = 0 ;
    }
    
};


int main (){
    Temperature temp ;

    temp.setIncrementStep(5);
    temp.increment();
    cout << "Current Temperature: " << temp.getTemperature() << endl ;
    
    temp.resetTemperature() ;
    cout << "After resetting: " << temp.getTemperature() ;

    return 0 ;


}


#include <iostream>
#include <string>

using namespace std ;

class BankAccount{
private:
    string name ;
    int accNum ;
    string accType ;
    float baln = 0 ;

public:
   
    void customerDetails(string cus_name, int n){
        name = cus_name ;
        accNum = n ; 
    }

    void accountType(string accnType){
        if (accnType == "current" || accnType == "Current")
        {
            accType = "Current";
        }
        else if (accnType == "saving" || accnType == "Saving")
        {
           accType = "Saving";
        }
        else
        {
          cout << "Account type is not valid" << endl ;
        }
    }

    void balance (){
        cout << "Balance: " << baln << endl ;
    }
    void deposit(float depAmount){
        baln = baln + depAmount ;
        cout << "Final Balance: " << baln << endl ;

    }
    void withdraw(float withdrawAmount){
        if (withdrawAmount > baln) {
            cout << "Sorry ! Not enough balance." << endl ;
        }
        else
        {
            baln = baln - withdrawAmount ;
            cout << "Final Balance: " << baln << endl ;
        }
    }
    void display (){
        cout << "Name: " << name << endl ;
        cout << "Account Number: " << accNum << endl ;
        cout << "Account Type: " << accType << endl ;
        cout << "Balance: " << baln << endl ;
    }
};

int main(){
    BankAccount me ;

    me.customerDetails("Aakash Abdullah Siddhartha", 251963541);
    me.accountType("Current");
    me.balance();

    me.deposit(5000.00);
    me.withdraw(2000.25);

    me.withdraw(50000.55);
    me.display();

    return 0 ;

}
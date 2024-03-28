#include<iostream>
using namespace std;

class InSufficientFundsException {
    private:
    int accno;
    double currentBalance;
    double withdrawAmount;
    string message;

    public : 

    InSufficientFundsException(string message) {
        this->message = message; 
    }

    void PrintStackTrace() {

        cout<<"Error : "<<endl;
        cout<<"Message : "<<message<<endl;

    }


};

enum EAccountType {
    SAVING,
    CURRENT,
    DMAT
};


class BankCustomer {

    private:
    int accno;
    EAccountType type;
    double balance;

     public:

    // BankCustomer() {
    //     accno = 1;
    //     type = DMAT;
    //     balance = 1000;
    // }

    // BankCustomer(int accno, EAccountType type, double balance) : accno(this.accno), type(this.type) , salary(this.balance) {}

    void accept() {
        int num = 0;
        cout<<"Enter AccountNumber : ";
        cin>>accno;
        cout<<"Enter type of account : ";
        cin>>num;
        type = (EAccountType)num;
        cout<<"Enter First Amount : ";
        cin>>balance;  
    }



    void display() {

        cout<<"AccountNumber is - "<<accno<<endl;
        cout<<"Type of account - "<<accountTypeToString(type)<<endl;
        cout<<"balance is - "<<balance<<endl;
    }

    void deposit(double amount){
        if(amount < 0)
        throw InSufficientFundsException("Entered Amount is Negative");
        this->balance = balance + amount;
        display();

    }

    void withdraw(double amount){
        if(balance < amount)
        throw InSufficientFundsException("Not a sufficient balance");
        this->balance = balance - amount;
        display();
    }

    int getAccno() {
        return accno;
    } 

    private: 

    string accountTypeToString(EAccountType accType) {
        switch (accType) {
            case SAVING:
                return "SAVING";
            case CURRENT:
                return "CURRENT";
            case DMAT:
                return "DMAT";
            default:
                return "UNKNOWN";
        }
    }





};

int main() {
    BankCustomer *Cptr[10]; 
    int index = 0;
    int choice;

    
    do {
        cout<<"0. Exit"<<endl;
        cout<<"1. Accept Employee"<<endl;
        cout<<"2. Deposit Amount Into Specific Account"<<endl;
        cout<<"3. Withdraw Amount From Specific Account"<<endl;
        cout<<"4. Display All Account Holders"<<endl;
        cin>>choice;

        switch(choice) {
             
             case 0:
             cout<<"Exit"<<endl;
             
             break;

             case 1:
             
                Cptr[index] = new BankCustomer();
                Cptr[index]->accept();
                index ++;
                break;


             case 2:
                try{
                int AccountNumber;
                double depositAmount;
                cout << "Enter Account Number: ";
                cin >> AccountNumber;
                cout << "Enter Deposit Amount: ";
                cin >> depositAmount;
                for(int i = 0 ;i < index; i ++) {
                    if( Cptr[i]->getAccno() == AccountNumber){
                        Cptr[i]->deposit(depositAmount);
                    }else {
                        cout<<"Wrong Account Number !!! Can't Deposit "<<endl;
                    }
                }
                }
                catch (InSufficientFundsException e) {
                    e.PrintStackTrace();

                }
                break;

                case 3:

                try {
                int AccountNumber;
                double withdrawAmount;
                cout << "Enter Account Number: ";
                cin >> AccountNumber;
                cout << "Enter Withdraw Amount: ";
                cin >> withdrawAmount;
                for(int i = 0 ;i < index; i ++) {
                    if( Cptr[i]->getAccno() == AccountNumber){
                        Cptr[i]->withdraw(withdrawAmount);
                    }else {
                        cout<<"Wrong Account Number !!! Can't Withdraw" <<endl;
                    }
                }
            } catch(InSufficientFundsException e) {
                e.PrintStackTrace();
            }
                
                break;


                case 4:

                for(int i = 0; i < index; i ++){
                    Cptr[i]->display();
                }
                break;

                default : 
                cout<<"Wrong Choices";



            }

             

        } while(choice != 0);

        for(int i=0 ;i < index; i ++){
            delete Cptr[i];
            
        }        
         return 0;
    }

    



#include<iostream>
#include<fstream>
#include<map>

using namespace std;



int Account::nextAccNumber = 0;


class Bank{
    map<long, Account> accounts;
    public:
    Bank();
    Account openAccount(string fname, string lname, long aadNum, float balance);
    Account balanceEnquiry(int accountNumber);
    Account deposit(int accountNumber, float amount);
    Account withdrawl(int accountNumber, float amount);
    void closeAccount(int accountNumber);
    ~Bank();
};



int main(){

    Bank b;
    Account acc;

    int option;
    string fname, lname;
    int accountNumber;
    float balance, amount;
    long aadharNumber;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$~~~~~~~~~~~~~~Cheeku's Bank~~~~~~~~~~~~~$\n";

    cout<<"$                  MENU                  $\n";
    cout<<"\t-> 1 Open an Account\n";
    cout<<"\t-> 2 Deposit\n";
    cout<<"\t-> 3 Withdrawl\n";
    cout<<"\t-> 4 Check Balance\n";
    cout<<"\t-> 5 Show all accounts\n";
    cout<<"\t-> 6 Close an account\n";
    cout<<"\t-> 7 Quit\n";
    cout<<"Select an option:"; cin>>option;

    switch(option){
        case 1:
            cout<<"Enter Frist name:"; cin>>fname;
            cout<<"Enter last name:"; cin>>lname;
            cout<<"Enter Aadhar Card Number:"; cin>>aadharNumber;
            cout<<"Enter initial Balance:"; cin>>balance;
            acc = b.openAccount(fname, lname,aadharNumber, balance);
            cout<<"Congratulation Your Account is Created sucessfully\n";
            cout<<acc;
    }


}

Account::Account(string fname, string lname, long aadnum, float bal){
    nextAccNumber++;
    accountNumber = nextAccNumber;
    firstName = fname;
    lastName = lname;
    aadharNumber = aadnum;
    balance = bal;
}

void Account::deposit(float amount){
    balance += amount;
}

void Account::withdrawl(float amount){
    balance -= amount;
}

void Account::setLastAcc(int accNum){
    nextAccNumber = accNum;
}

int Account::getLastAcc(){return nextAccNumber;}

ofstream & operator <<(ofstream &fileOut, Account &acc){
    fileOut<<acc.accountNumber<<endl;
    fileOut<<acc.firstName<<endl;
    fileOut<<acc.lastName<<endl;
    fileOut<<acc.aadharNumber;
    fileOut<<acc.balance;

    return fileOut;
}


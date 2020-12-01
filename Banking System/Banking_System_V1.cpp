#include<iostream>
#include<fstream>

using namespace std;

class Account{
    public:

    int accountNumber;
    string firstName, lastName;
    long aadharNumber;
    float balance;

    static int nextAccNumber;

    Account(){}
    Account(string fname, string lname, long aadnum, float bal);


//#######################################################
// Getter
    string getName(){
        string name;
        name = firstName + " " + lastName;
        return name;
        }

    float getBal(){return balance;}
    long getaadNumber(){return aadharNumber;}
    int getAcc(){return accountNumber;}
//#######################################################



    void deposit(float amount);
    void withdrawl(float amount);
    static void setLastAcc(int accountNumber);
    static int getLastAcc();

    //cout overloading
    friend ostream & operator <<(ostream &conOut, Account &acc);

    //file operator overloading
    friend ofstream & operator <<(ofstream &fileOut, Account &acc);

    friend ifstream & operator <<(ifstream &fileIn, Account &acc);

};

int Account::nextAccNumber = 0;




int main(){

    Account a1("Prachi", "Atul", 334544565453,50000);
    cout<<a1;
    Account a2("Atul", "Prachi", 443354455355,50000);
    cout<<a2;




}

Account::Account(string fname, string lname, long aadnum, float bal){
    nextAccNumber++;
    accountNumber = nextAccNumber;
    firstName = fname;
    lastName = lname;
    aadharNumber = aadnum;
    balance = bal;
}


//#######################################################
//cout << overloading
ostream & operator <<(ostream &conOut, Account &acc){
    conOut<<"Name: "<<acc.getName()<<endl;
    conOut<<"Account Number: "<<acc.getAcc()<<endl;
    conOut<<"Balance: "<<acc.getBal()<<endl;
    return conOut;
}
//#######################################################

ofstream & operator <<(ofstream &fileOut, Account &acc){
    //fileOut<<acc

}


ifstream & operator >>(ifstream &fileIn, Account &acc){
    fileIn>>acc.accountNumber;
    fileIn>>acc.firstName;
    fileIn>>acc.lastName;
    fileIn>>acc.aadharNumber;
    fileIn>>acc.balance;

    return fileIn;
}

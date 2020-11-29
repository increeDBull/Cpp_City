#include<iostream>
using namespace std;
int main(){


// const used with functions


    class Dog{
        int age;
        std::string name;
        public:
        Dog(){age = 3; name =  "Rusty";}
        //void setAge(const int &a){ age = a; a++;}


        //Const parameter
        void setAge(const int &a){ age = a; }

        // Const return value
        const string & getName(){return name;}


        // const function
        //can't change any member variable
        //can't call non const function too
        //const is used to overload function too
        //when the object is const then const function will be called
        void printName() const {cout<<"Const function"<<name<<endl;}
        void printName() {cout<<"Normal function"<<name<<endl;}


    };

//age variable out wali is changing too,
//to prevent this add const in parameter of  setAge()

    Dog d;

    int age = 4;
    d.setAge(age);

    cout<<age;

    const string &name = d.getName();
    cout<<name;

    d.printName();

    const Dog d2;

    d2.printName();













    return 0;
}
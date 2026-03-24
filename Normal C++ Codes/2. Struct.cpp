#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
};

struct Information{
    string program;
    string university;
    string address;

    void display(string p, string u, string a){
        program = p;
        university = u;
        address = a;

        cout<<"Program Name: "<<p<<endl;
        cout<<"University Name: "<<u<<endl;
        cout<<"Address: "<<a<<endl;
    }
};
int main(){

    Person p;
    p.name = "Mahmudul Hasan Aunoy";
    p.age = 26;
    cout<<p.name<<" is "<<p.age<<" years old."<<endl;


    Information I;
    I.program = "MSc in CSE";
    I.university = "DTU";
    I.address = "Lyngby, Denmark";
    I.display(I.program, I.university, I.address);

    return 0;
}

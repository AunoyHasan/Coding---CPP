#include <iostream>
#include <vector>
using namespace std;

struct Person{
    string name;
    int age;
    string address;
};

int main(){

    vector<Person> p;
    p.push_back({"Alice", 20, "Albertslubd"});
    p.push_back({"Bob", 22, "Lyngby"});

     // Add element using a variable
    Person p2 = {"Charlie", 21, "Glostrup"};
    p.push_back(p2);

    cout<<p[0].name<<endl<<endl;

    // Print student information
    for (const auto &per : p) {
        cout << "Name: " << per.name << ", Age: " << per.age << ", GPA: " << per.address << endl;
    }

    return 0;
}

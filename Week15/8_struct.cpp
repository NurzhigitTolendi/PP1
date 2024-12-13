#include <iostream>
#include <string>
using namespace std;

struct Address {
    string city;
    string street;
    int houseNumber;
};

struct Person {
    string name;
    int age;
    Address address; 
};

int main() {
    
    Person person = {"John Doe", 30, {"New York", "5th Avenue", 101}};

    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address.city << ", " 
         << person.address.street << ", " 
         << person.address.houseNumber << endl;

    return 0;
}

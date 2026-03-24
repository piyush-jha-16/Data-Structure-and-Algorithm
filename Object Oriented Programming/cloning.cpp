#include <bits/stdc++.h>
using namespace std;

class Address {
public:
    string city;

    Address(string city) {
        this->city = city;
    }

    Address(const Address& other) {
        this->city = other.city;
    }
};

class Person {
public:
    string name;
    Address* address;

    Person(string name, Address* address) {
        this->name = name;
        this->address = address;
    }

    Person(const Person& other) {
        this->name = other.name;
        this->address = other.address; // Shallow copy
    }
};

int main() {
    Address* address = new Address("Mumbai");
    Person* person = new Person("Rahul", address);
    Person* clonedPerson = new Person(*person);

    clonedPerson->address->city = "New Delhi";

    cout << person->name << " lives in " << person->address->city << endl;
    cout << clonedPerson->name << " lives in " << clonedPerson->address->city << endl;

    delete address;
    delete person;
    delete clonedPerson;
    return 0;
}
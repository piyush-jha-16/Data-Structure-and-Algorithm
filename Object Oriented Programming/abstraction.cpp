#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal eats food"<<endl;
    }
    void makeSound();
};
class Dog: public Animal{
    public:
    void makeSound(){
        cout<<"Dog barks"<<endl;
    }
};
class Cat: public Animal{
    public:
    void makeSound(){
        cout<<"Cat meows"<<endl;
    }
};
int main(){
    Dog dog;
    Cat cat;
    dog.eat();
    dog.makeSound();
    cat.makeSound();
    return 0;
}
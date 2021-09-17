#include <iostream>
#include <string>

using namespace std;

struct animalType {
  string name;
  int age;
  int favFood;


};

int main() {

animalType newAnimal;

cout << "Looks like Yoy've gotten a new pet \n";
cout << "Please enter your pet's name, age, favorite food with spaces: ";
cin >> newAnimal.name >> newAnimal.age >> newAnimal.favFood;


cout << "Name: " << newAnimal.name << ", age: " << newAnimal.age << " ";
}
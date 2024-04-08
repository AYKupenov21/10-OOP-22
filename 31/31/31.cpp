#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
};

int main() {
    Person person1("Виниамин", 15);
    Person person2("Севделина", 14);
    Person person3("Йордан", 12);
    std::cout << "Име: " << person1.name << ", Възраст: " << person1.age << std::endl;
    std::cout << "Име: " << person2.name << ", Възраст: " << person2.age << std::endl;
    std::cout << "Име: " << person3.name << ", Възраст: " << person3.age << std::endl;
}

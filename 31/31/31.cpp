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
    Person person1("��������", 15);
    Person person2("���������", 14);
    Person person3("������", 12);
    std::cout << "���: " << person1.name << ", �������: " << person1.age << std::endl;
    std::cout << "���: " << person2.name << ", �������: " << person2.age << std::endl;
    std::cout << "���: " << person3.name << ", �������: " << person3.age << std::endl;
}

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float mark1;
    float mark2;

public:
    Student() : name(""), mark1(0), mark2(0) {}
    Student(string n, float m1, float m2) : name(n), mark1(m1), mark2(m2) {}
    float GetMarks(int marknumber) {
        if (marknumber == 1)
            return mark1;
        else
            return mark2;
    }
    float calc_total() {
        return mark1 + mark2;
    }
};

int main() {
    float mark1, mark2;
    string name;
    cin >> name;
    cin >> mark1 >> mark2;
    Student studentName(name, mark1, mark2);
    cout << "GetMarks(1) => " << studentName.GetMarks(1) << endl;
    cout << "GetMarks(2) => " << studentName.GetMarks(2) << endl;
    cout << "calc_total() => " << studentName.calc_total() << endl;
}
#include <iostream>
using namespace std;
class Calculator {
private:
    float num1;
    float num2;

public:
    Calculator() : num1(0), num2(0) {}
    float add(float n1, float n2) {
        return n1 + n2;
    }
    float subtract(float n1, float n2) {
        return n2 - n1;
    }
    float multiply(float n1, float n2) {
        return n1 * n2;
    }
    float divide(float n1, float n2) {
        return n2 / n1;
    }
};
int main() {
    Calculator obj;
    float num1 = 10, num2 = 94;
    float addition = obj.add(num1, num2);
    float subtraction = obj.subtract(num1, num2);
    float multiplication = obj.multiply(num1, num2);
    float division = obj.divide(num1, num2);
    cout << "Addition: " << addition <<endl;
    cout << "Subtraction: " << subtraction <<endl;
    cout << "Multiplication: " << multiplication <<endl;
    cout << "Division: " << division;
}

#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float height;

public:
    Rectangle(float l, float h) : length(l), height(h) {}

    float perimeter() {
        return 2 * (length + height);
    }

    float area() {
        return length * height;
    }
};

int main() {
    float length;
    float height;
    cin >> length >> height;
    Rectangle rectangle(length, height);
    float perimeter = rectangle.perimeter();
    float area = rectangle.area();
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area;
}
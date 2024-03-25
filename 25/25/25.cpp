#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() : x(0), y(0) {}
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}
    float distance() {
        return sqrt(x * x + y * y);
    }
    float distance(int x1, int y1) {
        return sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    }
};

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    Point p1 = Point(num1, num2);
    float dist_from_origin = p1.distance();
    float dist_from_point = p1.distance(2, 1);
    cout << "Distance from origin: " << dist_from_origin <<endl;
    cout << "Distance from point (2, 1): " << dist_from_point;
}

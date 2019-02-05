#include <iostream>
#include <cmath>
#include "2.h"
using namespace std;



struct  Segment{
    Point p1;
    Point p2;
    double length(){
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        return sqrt(dx * dx + dy * dy);

    }
};

void Point::shift(double x, double y) {
    this->x += x;
    this->y += y;

}

int main() {
    Point a1 = {1.0, 2.0};
    Point a2 = {7.0, 8.0};
    a1.shift(1.0, 2.0);
    Segment s = {a1, a2};
    cout << s.length();
}
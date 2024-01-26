#include <iostream>
#include"Point.h"

using namespace std;

int main() {
    Point point1(2.1, 3.2);
    Point point2(1.9, 2.7);

    cout << "Distance: " << point1.distance(point2.getx(), point2.gety()) << endl;

    return 0;
}

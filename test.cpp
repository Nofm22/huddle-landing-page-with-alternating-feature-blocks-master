#include<iostream>
#include<math.h>
using namespace std;

class Point {
    private:
        float x,y;
    public:
        float getX();
        float getY();
        void input();
        void output();
        float distance(Point k);
};

float Point::getX() {
    return x;
}
float Point::getY() {
    return y;
}

void Point::input() {
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}
void Point::output() {
    cout << "(" << x << "," << y << ")" << endl;
}

float Point::distance(Point k) {
    return sqrt(pow(x - k.x),2) + pow((y - k.y),2);
}

int main() {
    Point x;
}
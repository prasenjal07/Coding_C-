#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    friend void distance(Point x1, Point x2);
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint(void)
    {
        cout << "entered point are :"
             << "(" << x << "," << y << ")" << endl;
    }
    void distance(Point x1, Point x2);
};
void Point::distance(Point x1, Point x2)
{
    int i, j, k, l;
    float dist;
    i = x1.x;
    j = x1.y;
    k = x2.x;
    l = x2.y;
    dist = sqrt(((i - k) * (i - k) + (j - l) * (j - l)));
    cout<<"the distance between giveen 2 points are:"<<dist<<endl;
    
}

int main()
{
    float dist;
    Point p(3, 4);
    p.displaypoint();
    Point q(4, 5);
    q.displaypoint();
    dist = distance(p, q);
    cout << "the distance between 2 given points is :" << dist << endl;
    return 0;
}

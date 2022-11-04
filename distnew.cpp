#include <iostream>
#include <cmath>
using namespace std;
class Point
{   void distance(Point,Point);
    friend void distance(Point x1 , Point x2);
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
    
};
void distance(Point x1, Point x2)
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

    Point p(30, 40);
    p.displaypoint();
    Point q(40, 50);
    q.displaypoint();
    distance(p, q);
    return 0;
}

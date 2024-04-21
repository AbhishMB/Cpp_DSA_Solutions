

using namespace std;
#include <iostream>
using namespace std;
struct point {
int x, y;
};
point operator+(point &pt1, point &pt2)
 { //LINE-1
pt1.x += pt2.x;
pt1.y += pt2.y;
 return pt1;
 }
int main() {
int a, b, c, d;
cin >> a >> b >> c >> d;
point p1 = {a, b};
point p2 = {c, d};
point np = p1 + p2;
cout << "(" << p1.x << ", " << p1.y << ")" << "(" << np.x << ", " << np.y << ")";
return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

class complex
{
    float x1, x2, y1, y2, ans;

public:
    complex(float, float, float, float);
    void print()
    {
        cout << ans;
    }
};

complex ::complex(float a, float b, float c, float d)
{
    x1 = a;
    x2 = b;
    y1 = c;
    y2 = d;
    ans = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main()
{
    complex num1(4, 6, 4, 5);
    // complex num2(1, 8);
    num1.print();
    // num2.print();

    return 0;
}
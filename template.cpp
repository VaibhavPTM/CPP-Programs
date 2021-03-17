#include <iostream>
using namespace std;
template <class t>
class vector
{
    int size;

public:
    t *arr;
    t d = 0;
    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t sumVec(vector &a)
    {
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * a.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <float> v1(3);
    v1.arr[0] = 1.0;
    v1.arr[1] = 2.0;
    v1.arr[2] = 3.0;
    vector <float> v2(3);
    v2.arr[0] = 1.3;
    v2.arr[1] = 2.3;
    v2.arr[2] = 3.23;
    float a1 = v1.sumVec(v2);
    cout<<a1<<endl;
    return 0;
}
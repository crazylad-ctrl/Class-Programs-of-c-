#include <iostream>
using namespace std;

class b;
class a
{
    int temp;
public:
a(int a1)
    {
        temp = a1;
    }

    friend void add(a, b);
    friend void swapData(a&, b&);
};

class b
{
    int temp2;
public:
    b(int b1)
    {
        temp2 = b1;
    }
 friend void add(a, b);
    friend void swapData(a&, b&);
};

void add(a a1, b b1)
{
    cout << "Sum is = " << a1.temp + b1.temp2 << endl;
}

void swapData(a &obj1, b &obj2)
{
    int temp3 = obj1.temp;
    obj1.temp = obj2.temp2;
    obj2.temp2 = temp3;

    cout << "After Swapping:" << endl;
    cout << "A = " << obj1.temp << endl;
    cout << "B = " << obj2.temp2 << endl;
}

int main()
{
    a obj1(20);
    b obj2(30);

    add(obj1, obj2);
    swapData(obj1, obj2);

    return 0;
}

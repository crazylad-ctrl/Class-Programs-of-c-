#include <iostream>
using namespace std;

class Value
{
private:
    int value1;

public:
    Value(int n)
    {
        value1 = n;
    }

    Value& correct(int n)
    {
        this->value1 = n;
        return *this;
    }

    void show()
    {
        cout << "Given value is " << value1 << endl;
    }
};

int main()
{
    Value n1(10);

    n1.correct(50).show();

    return 0;
}

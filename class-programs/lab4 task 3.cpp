#include <iostream>
using namespace std;

class employee
{
private:
    int empid;
    static int c;
public:
    employee()
    {
        c++;
        empid = c;
    }

    void show()
    {
        cout << "Employee ID = " << empid << endl;
    }

    static void totalemployee()
    {
        cout << "Counter is = " << c << endl;
    }
};

int employee::c = 0;

int main()
{
    Employee e1, e2, e3;

    e1.show();
    e2.show();
    e3.show();

    employee::totalEmployee();

    return 0;
}

#include <iostream>
using namespace std;

class Value {
    int m, cm;

public:
    Value(int me = 0, int cme = 0) {
        m = me;
        cm = cme;
    }

    Value operator+(Value v) {
        Value temp;

        temp.m = m + v.m;
        temp.cm = cm + v.cm;

        if (temp.cm >= 100) {
            temp.m++;
            temp.cm -= 100;
        }

        return temp;
    }

    void show() {
        cout << m << " m " << cm << " cm" << endl;
    }
};

int main() {
    Value v1(3, 20), v2(99, 45);

    Value v3 = v1 + v2;

    v3.show();

    return 0;
}

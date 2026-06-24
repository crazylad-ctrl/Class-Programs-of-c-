#include <iostream>
using namespace std;

class value {
    int n;

public:
    value(int x = 0) {
        n = x;
    }

    friend void operator++(value &obj);

    void show() {
        cout << "Value = " << n << endl;
    }
};

void operator++(value &obj) {
    ++obj.n;
}

int main() {
    value obj(10);

    ++obj;

    obj.show();

    return 0;
}

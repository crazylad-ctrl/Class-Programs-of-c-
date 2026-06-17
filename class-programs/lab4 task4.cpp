#include <iostream>
using namespace std;


class value {

    private :
    static int value1;
    public:
    static void valueis(int v){
        value1=v;
    }
    static void show(){
        cout << "the give vaue is "<< value1 <<endl;

    }
};


int value::value1=0;

int main (){
    value::valueis(50);
    value::show();
    return 0;

}

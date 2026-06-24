#include<iostream>
using namespace std;

class value{
    float f,i;

public:
    value(float ff=0,float ii=0){
        f=ff;
        i=ii;
    }

    operator float(){
        float tf=f+i/12;
        return tf/3.280833;
    }
};

int main(){
    value v(10,6);

    float m;

    m=v;

    cout<<"Distance in meter = "<<m<<endl;

    return 0;
}

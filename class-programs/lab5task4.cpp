#include<iostream>
using namespace std;

class value{
    float f,i;

public:
    value(float meter){
        float tf=meter*3.280833;

        f=(int)tf;
        i=(tf-f)*12;
    }

    void show(){
        cout<<f<<" feet "<<i<<" inches"<<endl;
    }
};

int main(){
    float m;

    cout<<"Enter meter: ";
    cin>>m;

    value d=m;

    d.show();

    return 0;
}

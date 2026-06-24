#include<iostream>
using namespace std;

class value{
public:
    float f,i;

    value(float ff=0,float ii=0){
        f=ff;
        i=ii;
    }
};

class value1{
    int m,cm;

public:
    value1(){
        m=0;
        cm=0;
    }
   value1(value v1){
        float tf=v1.f+v1.i/12.0;
 float tm=tf/3.28;
m=(int)tm;
   cm=(tm-m)*100;
    }
 void show(){
        cout<<m<<" m "<<cm<<" cm"<<endl;
    }
};

int main(){
value v1(10,5);
value1 v2;
v2=v1;
v2.show();
return 0;
}

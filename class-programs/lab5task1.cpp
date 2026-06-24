#include <iostream>
using namespace std;

class num{
    int n;

public :
 num (int x=0){
    n=x;

 }
 void operator++(){
++n;
 }

 void show(){
    cout << "the value is "<< n<<endl;
 }
};
int main(){
    num obj(22);
    ++obj;

    obj.show();
    return 0;

}

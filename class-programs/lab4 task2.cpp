#include <iostream>
using namespace std;
 class data1{
    private:
 int firstdata;


 public :
  

 data1(){
    firstdata=25;
 }
  friend class showresult;

 };

 class showresult{
    public :
     void show(data1 d){
        cout <<"the given private data is "<< d.firstdata <<endl;

     }
    };
    int main(){
        data1 d;
        showresult s;
        s.show(d);

    return 0;
 }

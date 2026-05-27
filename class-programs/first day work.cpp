#include <bits/stdc++.h>
using namespace std;
    
        class display {
        	public :
        	 void show(int i) {
        cout << "Integer is " << i << endl;
    }
    
    	 void show(double f) {
        cout << "float is " << f << endl;
    }
	 void show(string h) {
        cout << "string is " << h << endl;
    }
		};


void greet(string name = "Sudippppp") {
    cout << "Hello dada  " << name << endl;
}


int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 int x=1000;
 int m;
 float n;
 bool namesss=true;
  char c;
  string s;
  
 cout << "the times i love u is " << x << endl; // this is the implementation of the constant qualifierr
   cout << "Write your roll no sir" << endl ;
   cin >> m ;
    cout << "the value of pie is " << endl ;
    
    cin >> n;
    
 cout << "the sun rises from the east " << namesss << endl ;
  
  cout << " enter a character twin " << endl;
 cin >> c ;
 
  cout << " Enter your name twin : " << endl;
  
  cin >> s;
  
  cout << m << endl;
    cout << n << endl;
      cout << c << endl;
        cout << s << endl;
      display obj;

    obj.show(50);
    obj.show(3.1);
    obj.show("Hello world !!!!!!!");


  greet("Sudip");
    greet();
        
    return 0;
}

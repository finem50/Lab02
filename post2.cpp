#include <iostream>
#include <math.h>
using namespace std;

int main(){

int a, b, c, d;
double x1, x2;

cout << "Enter values for variables a, b, and c:\n";
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;

if(a == 0){
  cout << "Not quadratic\n";

  if(b == 0){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //if b != 0
  } else{
    x1 = -c/b;
  }
  //if a != 0
} else{
  d = (b*b) - 4 * a * c;

  if(d < 0){
    cout << "No real answer\n";
  } else {
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " <<  x2 << "\n";
  }
}

  return 0;
}

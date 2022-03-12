#include <iostream>
using namespace std;

int main(){
float a=0, b=0, c=0, Quadrato, Rettangolo, Trapezio, Triangolo;

cin >> a >> b >> c;

Quadrato=a*a;
Rettangolo=a*b;
Trapezio=(((a*b)*c)/2);
Triangolo=((a*b)/2);
cout << Quadrato << "\n" << Rettangolo << "\n" << Trapezio << "\n" << Triangolo << endl;

}

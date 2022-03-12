#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a=0, b=0, c=0, Quadrato, Rettangolo, Trapezio, Triangolo;

cout << "Inserisci tre valori: " << endl;
cin >> a >> b >> c;
cout << "\n" << endl;

//Qui va scritto il codice per eseguire i calcoli richiesti
Quadrato=a*a;
Rettangolo=a*b;
Trapezio=(((a*b)*c)/2);
Triangolo=((a*b)/2);
cout << "Le aree del Quadrato, Rettangolo, Trapezio e Triangolo sono rispettivamente: " << "\n" << Quadrato << "\n" << Rettangolo << "\n" << Trapezio << "\n" << Triangolo << endl;

return 0

}

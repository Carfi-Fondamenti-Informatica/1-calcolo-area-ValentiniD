#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a=0, b=0, c=0, Area_Triangolo, Area_Quadrato, Area_Rettangolo, Area_Trapezio;

cout << "Inserisci tre valori: " << endl;
cin >> a >> b >> c;
cout << "\n" << endl;

//Qui va scritto il codice per eseguire i calcoli richiesti
Area_Triangolo=((a*b)/2);
Area_Quadrato=a*a;
Area_Rettangolo=a*b;
Area_Trapezio=(((a*b)*c)/2);
cout << "Le aree del Quadrato, Rettangolo, Trapezio e Triangolo sono rispettivamente: " << "\n" << Area_Triangolo << "\n" << Area_Quadrato << "\n" << Area_Rettangolo << "\n" << Area_Trapezio << endl;

return 0;

}

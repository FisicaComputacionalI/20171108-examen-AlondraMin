// Velocidad
// Alondra Dominguez Gonzalez
// Noviembre 8, 2017

//Libreria
#include <iostream>
using namespace std;
int main (){
  // Definimos mis variables
  int distancia, tiempo; 
  int velocidad=0;
  //Ponemos nombre al primer dato que vamos a meter
  cout << "Elige una distancia: " << endl;
  cin>>distancia;
  //Nombre del segundo dato que se ingresara
  cout << "Elige un tiempo: " << endl;
  cin>>tiempo;
  //Formula que voy a usar
  velocidad=distancia/tiempo;
  cout << "La velocidad resultante es: " << velocidad <<endl;
}
 
 

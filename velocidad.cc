// Velocidad
// Alondra Dominguez Gonzalez
// Noviembre 8, 2017

//Libreria
#include <iostream>
using namespace std;
int main (){
  // Definimos mis variables
  // Tú definición inicial estaba hecha con enteros, cuando se dividen enteros el resultado tiene que ser entero para que se imprima. Sí se cambia el tipo de variable a float, tu programa corre sin problema. 
  float distancia, tiempo; 
  float velocidad=0;
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
 
 

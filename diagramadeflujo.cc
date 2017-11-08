// Diagrama de flujo; Examen
// Imprime los numeros primos menores que 5
// Alondra Dominguez Gonzalez
// Noviembre 8, 2017

//Libreria
#include <iostream>
using namespace std;
int main (){
  //Variables
  int x=1;
  do {while 
       (x<=5){
      if ((x%3)==0){
	x=x+2;
      }
      else {
	 cout<< x << endl;
	 x=x+2;
      }
    }
  }while (x>5);
  return 0;
}

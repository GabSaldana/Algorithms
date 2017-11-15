#include <iostream>
#include <sstream> // Para convertir el resto de la division de int a string.

using namespace std;

int main(){
 int numero, dividendo, resto, divisor = 2;
 string binario = "", ordenado = "";
 stringstream stream; // De int a string
 cout << "Ingrese el numero decimal a convertir a sistema binario" << endl;
 cin >> numero;
 dividendo = numero;
  while(dividendo >= divisor){
   resto = dividendo % 2;
   stream << resto; // Almacena el resto de las divisiones concatenandolas en el objeto stream.
   dividendo = dividendo/divisor;
  }
  stream << dividendo;
  binario = stream.str(); //Almacenamos en la variable llamada binario de tipo string los valores concatenados del objeto stream.
  for(unsigned int i = 0; i < binario.size(); i++)//Debemos ordenar los bits
  ordenado = binario[i] + ordenado;
  cout << "En sistema binario " << numero << " se escribe " << ordenado << endl;
 return 0;
}
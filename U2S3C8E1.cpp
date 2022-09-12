#include <iostream>
using namespace std;

string parImpar (int num);

int main(){
  int numero;
  string cadena;
  cout << "Ingrese el número: ";
  cin >> numero;
  cadena = parImpar (numero);
  cout << "El número es: " << cadena;
  return 0;
}

string parImpar (int num){
  string resultado;
  if (num%2==1){
    resultado = "impar";
  }
  return resultado;
}
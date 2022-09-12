#include <iostream>
using namespace std;

float calcularPerimetro(float);

int main(){
  double lado;
  cout << "Ingrese el lado del cuadradoa: " << endl;
  cin >> lado;
  cout << "El perímetro del cuadrado es:  " << calcularPerimetro(lado);
  return 0;
}

float calcularPerimetro(float lado){
  double perimetro = lado * 4;
return perimetro;
}
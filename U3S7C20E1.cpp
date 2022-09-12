#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  int x, n, c = 0, s = 0;
  cout << "Ingresar cantidad de números: ";
  cin >> n;
  while(c < n)
    {
      cout << "Ingresar número: ";
      cin >> x;
      s = s + x;
      c = c + 1;
    }
  cout << "La suma de los números es: " << s;
  getch();
}
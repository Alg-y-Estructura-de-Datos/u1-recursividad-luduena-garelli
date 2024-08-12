#include <iostream>

/* Implementar una función recursiva que determine la suma de los “n” primeros
números naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el
resultado de la suma.
*/

using namespace std;

int sumaRecursiva(int n)
{
  if (n == 1)
  {
    cout << n;
    return n;
  }
  else
  {
    cout << n << "+";
    return n + sumaRecursiva(n - 1);
  }
}

int main(int argc, char const *argv[])
{
  int n;

  cout << "Ingrese un número: ";
  cin >> n;

  cout << "El resultado de la suma es: " << sumaRecursiva(n) << endl;

  return 0;
}

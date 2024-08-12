#include <iostream>

using namespace std;

/*Implementar una función recursiva que dado un número entero lo muestre de
forma invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de
números negativos y mostrar primero el número a invertir y después el número
invertido.
*/

int invertirNumero(int n)
{
  if (n < 10)
  {
    return n;
  }
  else
  {
    cout << n % 10;
    return invertirNumero(n / 10);
  }
}

int main(int argc, char const *argv[])
{
  int n;

  cout << "Ingrese un número: ";
  cin >> n;

  if (n < 0)
  {
    cout << "El número debe ser no negativo." << endl;
    return 1;
  }

  cout << "El número invertido es: " << invertirNumero(n) << endl;

  return 0;
}

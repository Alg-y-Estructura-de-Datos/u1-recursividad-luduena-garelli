#include <iostream>

/*Crear un programa que pida al usuario un número entero positivo "n" y un dígito
"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Falso y si d= 1 retorna verdadero.
*/

using namespace std;

bool estaEnNumero(int n, int d)
{
  if (n == 0)
  {
    return false;
  }
  else
  {
    if (n % 10 == d)
    {
      return true;
    }
    else
    {
      return estaEnNumero(n / 10, d);
    }
  }
}

int main(int argc, char const *argv[])
{
  int n, d;

  cout << "Ingrese un número: ";
  cin >> n;

  cout << "Ingrese un dígito: ";
  cin >> d;

  if (n < 0)
  {
    cout << "El número debe ser no negativo." << endl;
    return 1;
  }

  cout << "El dígito " << d << (estaEnNumero(n, d) ? " está " : " no está ") << "en el número " << n << endl;
  return 0;
}

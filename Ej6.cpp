#include <iostream>

/*Crear un programa que pida al usuario un número entero positivo "n". Luego
implementar una función recursiva que cuente la cantidad de dígitos pares que
ocupan posiciones impares (identificándolas de izquierda a derecha) en "n". Ej.: si
el número es 22005 el resultado es 2, y si fuera 1414 el resultado es 0*/

using namespace std;

int invertirNumero(int n)
{
  int invertido = 0;

  while (n > 0)
  {
    invertido = invertido * 10 + n % 10;
    n /= 10;
  }

  return invertido;
}

int contarDigitosParesImpares(int n, int pos)
{
  if (n == 0)
  {
    return 0;
  }
  else
  {
    if (pos % 2 != 0 && (n % 10) % 2 == 0)
    {
      return 1 + contarDigitosParesImpares(n / 10, pos + 1);
    }
    else
    {
      return contarDigitosParesImpares(n / 10, pos + 1);
    }
  }
}

int main(int argc, char const *argv[])
{
  int n;

  cout << "Ingrese un numero entero positivo: ";
  cin >> n;

  cout << "Cantidad de digitos pares en posiciones impares: " << contarDigitosParesImpares(invertirNumero(n), 1) << endl;
  return 0;
}

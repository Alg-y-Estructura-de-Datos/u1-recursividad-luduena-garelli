#include <iostream>

using namespace std;

int potenciaRecursiva(int base, int exponente)
{
  if (exponente == 0)
  {
    return 1;
  }
  else
  {
    return base * potenciaRecursiva(base, exponente - 1);
  }
}

int main(int argc, char const *argv[])
{
  int base, exponente;

  cout << "Ingrese la base: ";
  cin >> base;

  cout << "Ingrese el exponente: ";
  cin >> exponente;

  cout << "El resultado de la potencia es: " << potenciaRecursiva(base, exponente) << endl;

  return 0;
}

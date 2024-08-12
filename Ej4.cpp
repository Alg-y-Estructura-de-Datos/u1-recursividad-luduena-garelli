#include <iostream>

/*Crear un programa que emplee recursividad para calcular el mayor de los
elementos de un vector de “n” tamaño dado por pantalla por el usuario.*/

using namespace std;

int mayorElemento(int vec[], int n, int mayor)
{
  if (n == 0)
  {
    return mayor;
  }
  else
  {
    if (vec[n - 1] > mayor)
    {
      mayor = vec[n - 1];
    }
    return mayorElemento(vec, n - 1, mayor);
  }
}

int main(int argc, char const *argv[])
{
  int n;
  cout << "Ingrese el tamaño del vector: ";
  cin >> n;
  int vec[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el valor de la posicion " << i + 1 << ": ";
    cin >> vec[i];
  }
  cout << "El mayor elemento del vector es: " << mayorElemento(vec, n, vec[0]) << endl;

  return 0;
}

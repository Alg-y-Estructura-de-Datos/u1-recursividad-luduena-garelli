#include <iostream>
using namespace std;

void ContarPosiciones(long long int num,int tam,int &cont){
    int aux = num % 10;
    if (((tam%2) !=0) && (aux % 2) == 0)
    {
        cont++;
    }
    if (0 < tam)
    {
        ContarPosiciones(num/10,tam-1,cont);
    }
    
    
}


int main(){
    long long int numero;
    int digitos,contador;
    cout << "ingrese un numero: ";
    cin >> numero;
    cout << "ingrese la cantidad de digitos: ";
    cin >> digitos;
    ContarPosiciones(numero,digitos,contador);
    cout << "la cantidad de numeros pares en posiciones inpares es: " << contador << endl;

    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

int SumaDeNaturales(int num){
    if (num == 1)
    {
        cout << " 1";
        return 1;
    }
    else
    {
        cout << num <<" + ";
        return num + SumaDeNaturales(num-1);
    }
    
    
}

int main() {
    int numero;

    do
    {
        cout <<"ingrese un numero natural: ";
        cin >> numero;
    } while (numero <= 0);

    cout << " = " << SumaDeNaturales(numero) << " "; 
   
    system("pause");
    return 0;
}

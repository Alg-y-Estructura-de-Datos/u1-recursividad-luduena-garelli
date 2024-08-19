#include <iostream>
using namespace std;

int Potencias(int base,int exp){
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        return (base * Potencias(base,exp-1));
    }
    
    
}

int main() {
    int b,a;
    
    cout << "ingrese la base: ";
    cin >> b;
    cout << "ingrese el exponente: ";
    cin >> a;

    cout << "el resultado es: " << Potencias(b,a) << endl;
    

    system("pause");
    return 0;
}

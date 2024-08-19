#include <iostream>
using namespace std;

void IntercamiarNumero(int num,int &invertido){
    if (num == 0)
    {
        return;
    }
    else
    {
        //cout << num << endl;
        invertido = invertido * 10 + (num % 10);
        IntercamiarNumero(num/10,invertido);

    }
    
    

    
}

int main() {
    int numero,n = 0;
    cout << "ingrese el numero: ";
    cin >> numero;
    IntercamiarNumero(numero,n);
    cout << n << endl;

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

bool EncontrarNumero(int n,int d){
    bool encontrado = false;
    if (n == d)
    {
        encontrado = true;
    }
    else if ((n%10) == d)
    {
        encontrado = true;
    }
    
    if ((n > 10) && encontrado == false)
    {
        encontrado = EncontrarNumero(n/10,d);
    }
    
    
    
    return encontrado;
    
}

int main()
{
    int num,d;
    cout << "ingrese un numero: ";
    cin >> num;
    cout << "ingrese otro numero: ";
    cin >> d;
    if (EncontrarNumero(num,d))
    {
        cout << "el numero 'd' esta en el numero 'n' "<< endl;
    }
    else
    {
        cout << "el numero 'd' no esta en el numero 'n' " << endl;
    }
    

    
     
    

    return 0;
}

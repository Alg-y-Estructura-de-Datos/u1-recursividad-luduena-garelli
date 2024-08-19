#include <iostream>
#include <array>
using namespace std;

void EncontrarMayor(int datos[],int pos,int &max,int tam){
    if (pos == 0)
    {
        max = datos[pos];
    }
    else
    {
        if (datos[pos] > datos[pos-1])
        {
            max = datos[pos];
        }
        
        
    }
    
    if (pos != tam-1)
    {
        EncontrarMayor(datos,pos+1,max,tam);
    }
}

int main()
{
    int arreglo[10] = {4,3,8,2,0,9,-1,4,15,0};
    int max;
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    EncontrarMayor(arreglo,0,max,tam);
    cout << "maximo: " << max << endl;


    system("pause");
    return 0;
}

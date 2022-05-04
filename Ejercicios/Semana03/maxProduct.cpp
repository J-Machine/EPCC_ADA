/*
* Producto máximo de dos números en una secuencia
-------------------------------------------------
• Dada una secuencia de n números no negativos y mayores que cero.
• El objetivo es encontrar el mayor número que se pueda obtener multiplicando dos números de esta secuencia.
* En tiempo lineal
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int MaxProduct(vector<int> &secuencia)
{
    int n = secuencia.size();
    sort(secuencia.begin(), secuencia.end());
    // Multiplicar el último pot el penultimo elemento 
    return secuencia.at(n-1)*secuencia.at(n-2);
}

void PrintVector( vector<int> &vect)
{
    for (auto &i: vect)
        cout << i << " ";
}

int main()
{
    vector<int> numeros {};
    int tamanio, num;

    cout << "Ingrese el tamaño de la secuencia. \n";
    cin >> tamanio;
    
    while (tamanio>0)
    {
        cout << "Ingrese un número:\t";
        cin >> num;
        numeros.push_back(num);
        tamanio--;
    }
    
    cout<<"\n- Secuencia: \t";
    PrintVector(numeros);

    cout<<"\n- Producto Máximo: \t";
    cout<< MaxProduct(numeros) <<endl;
}
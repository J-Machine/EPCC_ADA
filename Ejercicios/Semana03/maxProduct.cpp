/*
* Producto máximo de dos números en una secuencia
-------------------------------------------------
• Dada una secuencia de n números no negativos y mayores que cero.
• El objetivo es encontrar el mayor número que se pueda obtener multiplicando dos números de esta secuencia.
* En tiempo lineal
*/

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &A, int _length)
{
    int i, j, key, position;
    for (j = 1; j < _length; j++) 
    {
        key = A[j];
        i = j-1;

        while (i >= 0 && A[i] > key)
        {
            A[i+1] = A[i];
            i = i-1;
        } 
        A[i+1] = key;
    }
}
int MaxProduct(vector<int> &secuencia)
{
    int n = secuencia.size();
    insertionSort(secuencia, secuencia.size());
    // Multiplicar el último pot el penultimo elemento en el array ordenado resulta en el producto máximo
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
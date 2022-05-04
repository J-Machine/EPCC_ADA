/*
* Realicen la simulación de Insertion-Sort en el array
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void PrintVector( vector<int> &vect)
{
    for (auto &i: vect)
        cout << i << " ";
}
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
        PrintVector(A);
        cout<<endl;
    }
}
int main ()
{
    vector<int> secuencia{31,41,59,26,41,58};
    cout << "Array: ";
    PrintVector(secuencia);

    cout << "\nArray Ordenado Simulacion: \n";
    insertionSort(secuencia, secuencia.size());
    cout<<endl;
    return 0;
}
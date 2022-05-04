/*
* Escriba el procedimiento Insertion-Sort para que muestre el resultado en orden descendente
*/

#include <iostream>
#include <vector>

using namespace std;

void PrintVector( vector<int> &vect)
{
    for (auto &i: vect)
        cout << i << " ";
}
void insertionSortDesc(vector<int> &A, int _length)
{
    int i, j, key, position;
    for (j = 1; j < _length; j++) 
    {
        key = A[j];
        i = j-1;

        while (i >= 0 && A[i] < key)    // Descendente: el valor actual es mayor al anterior y se intervcambia . Los valores grandes se mueven al lado izquierdo.
        {
            A[i+1] = A[i];
            i = i-1;
        } 
        A[i+1] = key;
    }
}
int main ()
{
    vector<int> secuencia01{31,41,59,26,41,58};
    vector<int> secuencia02{11,12,13,14,15,16,19,40}; //Array en forma ascendente
    vector<int> secuencia03{0,41,60,70,44,1};
    vector<vector<int>> secuencias{secuencia01, secuencia02, secuencia03 };
    
    for(auto &secuencia : secuencias )
    {
        cout << "Array: ";
        PrintVector(secuencia);

        cout << "\nArray Orden Descendente: ";
        insertionSortDesc(secuencia, secuencia.size());
        PrintVector(secuencia);
        cout<<endl<<endl;
    }
    return 0;
}  
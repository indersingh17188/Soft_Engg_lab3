#include <iostream>
#include <labs3.h>

using namespace std;

void DisplayPointerInfo (int * array_name, int array_size)
{
cout << "\nThe address of the first element of array is : " << array_name << endl;
cout << "The values within the array are : " << endl;
for (int i=0;i<array_size;i++)
    cout << *(array_name+i) << " " ;
cout << endl;
}

void swap1 (int* a, int* b)
{
    int temp = *a;
    *a=*b;
    *b= temp;
}

void SwapArray(int* array_1, int* array_2, int size_array)
{
    for (int i=0;i<size_array;i++)
    {
        int temp = *(array_1+i);
        *(array_1+i)=*(array_2+i);
        *(array_2+i)=temp;
    }
}

int* CreateArray(int size)
{
    int *p = new int [size];
    return p;
}

void DeleteArray(int* array_name)
{
    delete [ ] array_name;
}

float** CreateMatrix(int n, int m)
{
    float** matrix = new float*[n];
    for(int i = 0; i < m; i++)
        *(matrix+i) = new float[n];
    return matrix;
}

void Deletematrix(float** matrix_name, int rows)
{
    for (int i=0;i<rows;i++) delete [] matrix_name[i];
    delete []matrix_name;
}

void DisplayMatrix(float** matrix_name, int n, int m)
{
    cout << "The address of the matrix of floats is :" << matrix_name << endl;
    cout <<"The elements within the matrix are :" << endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << *(*(matrix_name+i)+j) << " ";
        }
        cout << endl;
    }
}

void dot_product(int* array_name1, int* array_name2, int dim)
{
    int product = 0;
    for (int i=0;i<dim;i++)
    {
        product += *(array_name1+i) * *(array_name2+i) ;
    }
    cout << "The dot product of two given vectors is : " << product << endl;
}

void MatrixProduct(float** matrix_1, float** matrix_2, float** matrix_product, int r1, int c1, int c2)
{
    for(int i = 0; i < r1; ++i)
            for(int j = 0; j < c2; ++j)
                for(int k = 0; k < c1; ++k)
                {
                    *(*(matrix_product+i)+j) += *(*(matrix_1+i)+k) * *(*(matrix_2+k)+j);
                }
}



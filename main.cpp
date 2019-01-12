#include <iostream>
#include <labs3.h>

using namespace std;

int main()
{/*
    cout << "\nEnter the no of elements for the array : " << endl;
    int n; cin >> n;
    int* a = CreateArray(n); //using a function that returns a pointer to an array of n integers
    int* b = new int [n];
    int even=2, odd=1;

    for (int i=0;i<n;i++) //Putting the even and odd values in both arrays simultaneoulsy
    {
        *(a+i)=even;
        *(b+i)=odd;
        even+=2, odd+=2;
    }
    cout <<"\nDisplaying array a containing first " <<n<<" even numbers : " << endl;
    DisplayPointerInfo(a,n);
    cout <<"\nDisplaying array b containing first " <<n<<" odd numbers : " << endl;
    DisplayPointerInfo(b,n);
    //Make sure to delete the array which we allocated dynamically using pointers

    cout <<"\nEnter any two variables to be swapped : " << endl;
    cout <<"Enter variable 1 : " << endl;
    int v1; cin >> v1;
    cout <<"Enter variable 2 : " << endl;
    int v2; cin >> v2;
    int* pv1 = &v1; int *pv2 = &v2; //Pointers pointing to these 2 variables
    swap1(pv1,pv2); //Let's call the function which receives two pointers to swap the actual variables
    cout << "\nNow the value of v1 is "<< v1 <<" and v2 is "<< v2 <<endl;

    cout << "\nLet's interchange the elements of 2 arrays a & b used above in Excercise 1 " << endl;
    SwapArray(a,b,n);
    cout <<"\nNow the contents of array a are : " ;
    DisplayPointerInfo(a,n);
    cout <<"\nand the contents of array b are : ";
    DisplayPointerInfo(b,n);
    DeleteArray(a);
    DeleteArray(b);

    cout << "\nLet's now create a matrix of floating points." << endl;
    cout <<"Enter the no of rows for matrix : " << endl;
    int n; cin >> n;
    cout <<"Enter the no of columns for matrix : " << endl;
    int m; cin >> m;
    float** f_matrix=CreateMatrix(n,m);
    //Let's display first, the address of the matrix in the memory, and second the elements of this matrix directly without initializing
    DisplayMatrix(f_matrix,n,m);
    //Make sure to delete the matrix which we allocated dynamically using pointer to pointers
    Deletematrix(f_matrix,n);

    cout << "\nEnter the no of dimensions of the vectors to calculate their dot product : ";
    int dim; cin >> dim;
    cout << "Enter the values of "<<dim<<" dimensional vectors one by one"<<endl;
    int* vector_1=CreateArray(dim);
    int* vector_2=CreateArray(dim);
    for (int i=0;i<dim;i++)
    {
        cout<<"Enter the " <<i+1<<" element for Vector 1 : " ;
        cin >> *(vector_1+i);
    }
    cout << endl;
    for (int i=0;i<dim;i++)
    {
        cout<<"Enter the " <<i+1<<" element for Vector 2 : " ;
        cin >> *(vector_2+i);
    }
    dot_product(vector_1,vector_2,dim);
*/
    cout << "Enter rows and columns for first matrix: ";
    int r1, c1 ; cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    int r2, c2; cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }
    float** matrix_1 = CreateMatrix(r1,c1);
    float** matrix_2 = CreateMatrix(r2,c2);
    float** product_matrix = CreateMatrix(r1,c2);
    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> *(*(matrix_1+i)+j);
        }
    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(int i = 0; i < r2; ++i)
        for(int j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> *(*(matrix_2+i)+j);
        }

    // Initializing elements of matrix mult to 0.
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
        {
            *(*(product_matrix+i)+j)=0;
        }
    //Let's call the function to multiply two matrices
    MatrixProduct(matrix_1, matrix_2, product_matrix, r1, c1, c2);
    //Let's call another function to display the resulant matrix
    DisplayMatrix(product_matrix,r1,c2);
    //Make sure to delete the matrix which we allocated dynamically using pointer to pointers
    Deletematrix(matrix_1,r1);
    Deletematrix(matrix_2,r2);
    Deletematrix(product_matrix,r1);

    return 0;
}

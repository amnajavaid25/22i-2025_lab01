#include <iostream>
using namespace std;

void input(int array[][100], int m, int n)
{
    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> array[i][j];
        }
    }
}


void display(int array[][100], int m, int n)
{
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}


int sum(int array[][100], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            sum += array[i][j];
        }
    }
    return sum;
}


void rowWiseSum(int array[][100], int m, int n)
{
    cout << "Row-wise sum:" << endl;
    for (int i = 0; i < m; ++i)
    {
        int rSum = 0;
        for (int j = 0; j < n; ++j)
        {
            rSum += array[i][j];
        }
        cout << "Sum of elements in row " << i + 1 << ": " << rSum << endl;
    }
}


void columnWiseSum(int array[][100], int m, int n)
{
    cout << "Column-wise sum:" << endl;
    for (int j = 0; j < n; ++j)
    {
        int cSum = 0;
        for (int i = 0; i < m; ++i)
        {
            cSum += array[i][j];
        }
        cout << "Sum of elements in column " << j + 1 << ": " << cSum << endl;
    }
}


void transpose(int array[][100], int m, int n)
{
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int array[100][100];
    int option;

    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    do {
        cout << "Menu:" << endl;
        cout << "1. Input elements into matrix." << endl;
        cout << "2. Display elements of matrix." << endl;
        cout << "3. Sum of all elements of matrix." << endl;
        cout << "4. Display row-wise sum of matrix." << endl;
        cout << "5. Display column-wise sum of matrix." << endl;
        cout << "6. Create transpose of matrix." << endl;
        cout << "0. Exit." << endl;
        cout << "Enter your choice: ";
        cin >> option;

        if (option == 1)
        {
            input(array, m, n);
            cout << endl;
        }

        else if (option == 2)
        {
            display(array, m, n);
            cout << endl;
        }

        else if (option == 3)
        {
            cout << sum(array, m, n) << endl;
            cout << endl;
        }

        else if (option == 4)
        {
            rowWiseSum(array, m, n);
            cout << endl;
        }

        else if (option == 5)
        {
            columnWiseSum(array, m, n);
            cout << endl;
        }

        else if (option == 6)
        {
            transpose(array, m, n);
            cout << endl;
        }

        else
        {
            cout << "Please choose an option from the menu." << endl;
        }



    } while (option != 0);

    return 0;
}

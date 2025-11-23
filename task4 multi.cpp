#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
     if (c1 != r2)
    {
        cout << "Matrix Multiplication Not Possible." << endl;
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], multi[100][100];

    cout << "Enter Elements for 1st Matrix :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter Elements for 2nd Matrix :" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            multi[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                multi[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Multiplication of 1st & 2nd Matrix :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << multi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

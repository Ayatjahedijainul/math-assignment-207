#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    if (r1 != r2 || c1 != c2)
    {
        cout << "Addition and subtraction of matrix not possible." << endl;
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], add[100][100], sub[100][100];
    cout << "Enter elements for first matrix :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements for second matrix :" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            add[i][j] = mat1[i][j] + mat2[i][j];
            sub[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    cout << "Addition of matrixs :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Subtraction of matrixs :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


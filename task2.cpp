#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter the size of square matrix :";
    cin >> m;
    int mat [m][m];
    cout << "Enter elements os matrix A :";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> mat[i][j];
        }
        cout << endl;
    }
    bool isSymmetric = true;
    for(int i=0; i<m && isSymmetric;i++)
    {
        for(int j=0; j<m; j++)
        {
          if(mat[i][j] != mat[j][i])
          {
              isSymmetric = false;
              break;
          }
        }
    }
    if(isSymmetric)
    {
        cout << "The matrix is symmetric :";
    }
    else
    {
        cout << "The matrix is not symmetric :";
    }
    return 0;
}



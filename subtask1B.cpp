#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout << " Enter the numbers of Row :";
    cin >> m;
    cout << " Enter the numbers of column :";
    cin >> n;
    int mat[m][n];
    cout << "Enter the Elements of square matrix :" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>> mat[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    cout << " Transpose of a square matrix: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << mat[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}



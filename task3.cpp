#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << " Enter the size of square matrix :";
    cin >> m;
    int mat[m][m];
    cout << "Enter the elements of matrix :";
    for(int i=0; i<m;i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> mat[i][j];
        }
    }
    bool isSkewSymmetric = true;
    for(int i=0; i<m && isSkewSymmetric; i++)
    {
        for(int j=0; j<m; j++)
        {
            if( i==j && mat[i][j] !=0)
            {
                isSkewSymmetric = false;
                break;
            }
            else if (mat[i][j] != -mat[j][i])
            {
                isSkewSymmetric = false;
                break;
            }
        }
    }
    if(isSkewSymmetric)
    {
        cout << "The matrix is SkewSymmetric :";
    }
    else
    {
        cout << "The matrix is not SkewSymmetrix :";
    }
    return 0;
}



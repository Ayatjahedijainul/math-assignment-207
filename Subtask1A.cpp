

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N;
    cout << "Enter the numbers of Row :";
    cin >> M;
    cout << "Enter the numbers of Column :";
    cin >> N;
    int matA[M][N],matB[N][M];
    cout << "Enter Elements of rectangular matrix A :" << endl;
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> matA[i][j];
        }
    }
   for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
             matB[j][i]= matA[i][j];
        }
    }
    cout << " Transpose of matrix A is matrix B:" <<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout << matB[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}

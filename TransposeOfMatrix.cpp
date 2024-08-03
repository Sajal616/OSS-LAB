#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    cout<<"Enter the values in matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> transposedMatrix(m,vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transposedMatrix[i][j]=matrix[j][i];
        }
    }
    cout<<"Original matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transposed matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<transposedMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

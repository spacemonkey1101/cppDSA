#include <iostream>

using namespace std;

void printArr(int arr[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int wavePrint(int arr[][4], int n, int m){
    int direction=1;
    for(int col = m-1; col >=0 ; col--){
        if(direction == 1){
            //down print
            for(int row=0; row<n; row++){
                cout<<arr[row][col]<<" ";
            }
            direction=0;
        } else {
           //up print
            for(int row=n-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }
            direction=1; 
        }
    }
}

int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = 3, m = 4;
    printArr(arr, n, m);

    cout << endl;
    cout << "Wave Print" << endl;
    wavePrint(arr, n, m);
}
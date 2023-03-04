#include <iostream>
#define MAX_SIZE 20
using namespace std;

 bool isSafe(int board[][MAX_SIZE], int n, int i, int j){
        //safe from top
        for (int k = 0 ; k < i ; k++){
            if(board[k][j] == 1){
                return false;
            }
        }
        //safe from left diagonal
        for (int r = i-1,c=j-1 ; r >=0 && c>=0 ; r--,c--){
            if(board[r][c] == 1){
                return false;
            }
        }

        //safe from right diagonal
        for (int r = i-1,c=j+1 ; r >=0 && c<n ; r--,c++){
            if(board[r][c] == 1){
                return false;
            }
        }
        return true;
    }
    int nqueenCount(int board[][MAX_SIZE], int n, int i){
        //base case
        if(i==n){
            return 1;
        }
        //rec case 
        int ways = 0;
        for (int j=0;j<n;j++){
            if(isSafe(board,n,i,j)){
                board[i][j] = 1;
                ways +=nqueenCount(board,n,i+1);
                board[i][j] = 0;
            }
        }
        return ways;
    }
    int main() {
        int board[MAX_SIZE][MAX_SIZE] = {0},n;
        cin>>n;
        cout<< nqueenCount(board,n,0); 
    }
#include <iostream>

using namespace std;

void clearBitsInRange(int &num, int sbit, int ebit)
{
    int mask1 = (~0 << (ebit + 1));
    int mask2 = (1 << sbit) - 1;
    int mask = mask1 | mask2;
    num = num & mask;
}

void replaceBits(int &N, int M, int i, int j)
{
    // clear the bits first
    clearBitsInRange(N, i, j);
    // set it with the value of M
    int mask = M << i;
    N = N | mask;
}

int main()
{
    // look in the notebook for the problem definition
    int N, M, i, j;
    cout << "Enter the number N " << endl;
    cin >> N;
    cout << "Enter the number M " << endl;
    cin >> M;
    cout << "Enter the start position i " << endl;
    cin >> i;
    cout << "Enter the end position j " << endl;
    cin >> j;

    replaceBits(N, M, i, j);
    cout << "The new value of N is " << N << endl;
}
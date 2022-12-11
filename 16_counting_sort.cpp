#include <iostream>
using namespace std;

void countingSort(int *a, int size)
{
    // possible values of marks 0 to 100
    // but if no one got 100 we can go till the largest value
    // this is the auxillary space
    int largest = -1;
    for (int i = 0; i < size; i++)
    { // O(N)
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    int count_array[largest + 1] = {0};
    for (int i = 0; i < size; i++)
    { // O(N)
        count_array[a[i]] += 1;
    }

    for (int i = 0, index = 0; i <= largest; i++)
    { // for some case we are doing O(1) work and
        // for some we are doing more than O(1)
        // the work done in max case would be O(largest) viz constant
        // WORK DONE is O(1)
        while (count_array[i] != 0)
        {
            a[index++] = i;
            count_array[i] -= 1;
        }
    }
    cout << endl;
}

int main()
{
    int physics_scores[] = {77, 88, 32, 10, 0, 85, 88, 77};
    int size = sizeof(physics_scores) / sizeof(int);

    cout << "The scores of physics are " << endl;
    // for each loop
    for (int x : physics_scores)
    {
        cout << x << ",";
    }
    cout << endl;

    // counting sort
    countingSort(physics_scores, size);

    cout << "The sorted scores of physics are " << endl;

    for (int x : physics_scores)
    {
        cout << x << ",";
    }
    cout << endl;
}
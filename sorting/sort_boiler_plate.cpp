#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6};

    cout << "Original array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    insertionSort(arr);

    cout << "Sorted array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
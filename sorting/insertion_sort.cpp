#include <iostream>
#include <vector>
using namespace std;

// void insertionSort(vector<int> &arr)
// {
//     int n = arr.size();
    
//     for(int i=1; i<n; i++){
//         for(int j=i ; j>=0; j--){
//             // int temp = arr[j];
//             // if(temp < arr[j-1]){

//             if(arr[j] < arr[j-1]){
//                 swap(arr[j],arr[j-1]);
//             }
//         }
//     }
// }
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {12, 5, 13, 7, 15, 1, 11};

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
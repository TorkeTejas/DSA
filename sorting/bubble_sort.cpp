#include <iostream>
#include <vector>
using namespace std;

vector<int> inputVector()
{
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector<int> array(size);
    //     for(int vals : array ){
    //         cout<<"Enter the Element's to the array : ";
    // 4        cin>>array[vals];
    //     }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i]; 
    }
    return array;
}

void printVector(vector<int> &array)
{
    for (int vals : array)
    {
        cout << vals << " ";
    }
    cout<<endl;
}

// vector<int> bubSort(vector<int> &array,int size){
    
//     for(int i; i++; i<size-1){
//         for(int j=0; j++; j<size-i-1){
//             if(array[j]>array[j+1]){
//                 int temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         } 
        
//     }
//     return array;
// }
vector<int>bubSort(vector<int> &array) 
{
    int size = array.size();
    for (int i = 0; i < size - 1; i++) 
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]); 
            }
        }
        return array;
}



 
int main()
{
    cout << "Started : " << endl;
    // vector<int> array = inputVector();
    // vector<int> cpArray = array;
    // int size = array.size();
    // printVector(array);
    // vector<int> bubbleSort = bubSort(cpArray);
    // printVector(bubbleSort);
    // printVector(array);
    

}
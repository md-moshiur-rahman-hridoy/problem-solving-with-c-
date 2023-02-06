#include <iostream>
using namespace std;

// Sorting function (bubble sort)
void bubble_sort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}

int main()
{
    int arr[] = {23,61,11,21,10};
    // let's find how many items have in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n); // call bubble sort function

    for(auto u:arr) cout<<u<<" "; // print sorted data
    cout<<endl;
}


#include <iostream>

using namespace std;

int main()
{
    int arr[]={5,9,4,2,99,47,1,3,24};
    int n = sizeof(arr)/4;

    //Print Array
    cout << "Before Sorting: ";
    for(int i=0;i<n;i++){
         cout << arr[i]<< " ";
    }
    cout << endl;


    //Selection Sorting
    int temp,min,index;
    for(int i=0;i<n-1;i++){
            min=arr[i];
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                index = j;
            }
        }
        if(arr[i]!= min){
           temp = arr[i];
           arr[i] = arr[index];
           arr[index] = temp;
        }
    }
    cout << "After Sorting: ";
    for(int i=0;i<n;i++){
         cout << arr[i]<< " ";
    }

    return 0;
}

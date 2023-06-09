#include <iostream>

using namespace std;

int main()
{
    int arr[]={8,4,6,7,2,9,15,78,61,3};
    int n = sizeof(arr)/4;

    //Print Array
    cout << "Before Sorting: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    //Insertion Sorting..............
    //Using For LOOP
    int j;
    for(int i=1;i<n;i++){
        int temp = arr[i];
        for(j=i-1;j>=0;j--){
            if(temp < arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    cout << "After Selection Sorting: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


    /*
    //Using While LOOP............
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && temp < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout << "After Selection Sorting: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    */
    return 0;
}

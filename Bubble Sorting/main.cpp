#include <iostream>

using namespace std;

int main()
{
    int arr[] = {8,14,7,5,2,36,3,6,4,24};

    //print Array
    cout<< "Before Sorting : ";
    for(int i=0;i<sizeof(arr)/4;i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;


    //Bubble sorting............
    for(int i=0;i<(sizeof(arr)/4)-1;i++){
        for(int j=0;j<(sizeof(arr)/4)-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "After Bubble Sorting: ";
    for(int i=0;i<sizeof(arr)/4;i++){
        cout << arr[i] <<" ";
    }


    return 0;
}

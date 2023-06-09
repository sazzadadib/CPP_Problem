#include <iostream>

using namespace std;
void mergeArr(int arr[],int start, int mid , int end){
    int a[end-start+1];
    int i=start, j = mid+1,k=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            a[k++] = arr[i++];
        }
        else{
            a[k++] = arr[j++];
        }
    }
    while(j<=end){
            a[k++] = arr[j++];
        }

    while(i<=mid){
            a[k++] = arr[i++];
        }

    for(i=start,k=0;i<=end;i++){
        arr[i] = a[k++];
    }


}
void mergeSort(int arr[],int start, int end){

    if(start <end){
        int mid = (start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        mergeArr(arr,start,mid,end);

    }
}




int main()
{
    int arr[]= {7,5,9,3,4,8,22,56,1,67};
    int n = sizeof(arr)/4;

    //Print Array......
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // Call Merge Sorting Function.......
    mergeSort(arr,0,n-1);

    cout << "After Merge Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}

#include <iostream>

using namespace std;
void heapify(int arr[], int n , int x){
    int large = x;
    int left = (2*x)+1, right = (2*x)+2;

    while(left<n && arr[left]>arr[large]){
        large = left;
    }
    while(right<n && arr[right]>arr[large]){
        large = right;
    }

    if(large != x){
        int temp = arr[x];
        arr[x] = arr[large];
        arr[large] = temp;
        heapify(arr, n, large);
    }

}

void heapSort(int arr[], int n){
    for(int i = (n/2)-1 ; i>=0 ; i-- ){
        heapify(arr,n,i);
    }

    for(int i = n-1; i>=0 ; i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr,i,0);
    }
}

int main()
{
    int arr[] = {1,58,74,2,9,46,27,99,14,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    //print array...................
    cout << "Before Sorting : ";
    for(int i=0;i<n;i++){
            cout << arr[i] << " ";
    }
    cout << endl;

    //Heap Sorting.................
    heapSort(arr,n);

    cout << "After Sorting : ";
    for(int i=0;i<n;i++){
            cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

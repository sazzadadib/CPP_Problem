#include <iostream>

using namespace std;
int devide(int arr[],int lb,int  ub){
    int pivot = arr[lb];
    int start = lb, end = ub;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;
    return end;
}
void quickSort(int arr[],int start, int end){
      if(start < end){
          int x = devide(arr,start, end);
          quickSort(arr,start,x-1);
          quickSort(arr,x+1,end);
      }
}

int main()
{
    int arr[]={9,5,3,6,7,8,10,47,2,74,1};
    int n = sizeof(arr)/sizeof(arr[0]);


    //print Array
    cout << "Before Sorting: ";
    for(int i=0 ; i<n; i++){
        cout <<  arr[i] << "  ";
    }
    cout << endl;

    //Quick Sorting ...............
    quickSort(arr,0,n-1);

    cout << "After Sorting: ";
    for(int i=0 ; i<n; i++){
        cout <<  arr[i] << "  ";
    }
    cout << endl;





    return 0;
}

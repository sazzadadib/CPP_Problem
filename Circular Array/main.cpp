#include <iostream>

using namespace std;

int main()
{
    int arr[10],n,l=5,temp;
    int a[10]={5,2,1,7,4};
    cout << "Hello world!" << endl;

    for(int i=0;i<l;i++){
        cin >> n;
        arr[i%l]=n;
    }
    for(int i=4;i<l+4;i++){
        cout << arr[i%l]<<" ";
    }
    cout << endl;

    //sorting

    for(int i=0;i<l;i++){
        for(int j=i;j<l;j++){
            if(arr[i%l]>arr[j%l]){
                temp = arr[i%l];
                arr[i%l] = arr[j%l];
                arr[j%l] = temp;
            }
        }
    }
    for(int i=0;i<l;i++){
        cout << arr[i%l]<<" ";
    }
    for(int i=0;i<l;i++){
        for(int j=i;j<l;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout <<endl;
    for(int i=0;i<l;i++){
        cout << a[i]<<" ";
    }



    return 0;
}

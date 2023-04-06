#include <iostream>

using namespace std;

int main()
{
    int n =10,first =0,last=n;
    int arr[n] = {1,2,3,4,5,6,8,9,10,11};
    int mid = (first+last)/2;
    bool found = false;
    int s;

    cout << "Enter a Number: ";
    cin >> s;


    while(first<=last && !found)
    {
        if(arr[mid]>s)
        {
            last = mid - 1;
            mid = (first+last)/2;
        }
        else if (arr[mid]<s)
        {
            first= mid+1;
            mid = (first+last)/2;
        }
        else if(arr[mid]==s)
        {
            found = true;

        }
    }

    if(found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}

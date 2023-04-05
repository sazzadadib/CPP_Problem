#include <iostream>
#include "stackLinklist.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Stack list1(5);
    list1.push(7);
    list1.push(11);
    list1.push(20);
    int l = list1.lengthIs();
    for(int i=0;i<l;i++){
        cout << list1.pop()<<endl;
    }


    return 0;
}

//REVATHI OC
//23070123105
#include <iostream>
using namespace std;
int main() {
    cout<<"2.Accessing array elements using pointer"<<endl;
    int a[5]={1,2,3,4,5};
    int *a_ptr;
    a_ptr=&a[0];
    for (int i=0;i<5;i++){
        cout<<"Element "<<i<<" : "<<*a_ptr<<endl;
        a_ptr++;
    }
}


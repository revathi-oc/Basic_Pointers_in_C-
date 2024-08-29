//REVATHI OC
//23070123105
#include <iostream>
using namespace std;
int main() {
   cout<<"1.Declare and initialize pointers of different data types"<<endl<<"int"<<endl;
   int a = 1;
   int*a_ptr;
   a_ptr=&a;
   cout<<"The value in a is "<<a<<endl;
   cout<<"The address of variable a is "<<&a<<endl;
   cout<<"The value in pointer variable a_ptr "<<a_ptr<<endl;
   cout<<"The value pointed by *a_ptr is "<<*a_ptr<<endl;
   cout<<"After increment,the value in pointer variable a_ptr "<<++a_ptr<<endl;
   return 0;
}

int main() {
   cout<<"1.Declare and initialize pointers of different data types"<<endl<<"float"<<endl;
   float a1 = 10.11;
   float*a1_ptr;
   a1_ptr=&a1;
   cout<<"The value in a is "<<a1<<endl;
   cout<<"The address of variable a is "<<&a1<<endl;
   cout<<"The value in pointer variable a_ptr "<<a1_ptr<<endl;
   cout<<"The value pointed by *a_ptr is "<<*a1_ptr<<endl;
   cout<<"After increment,the value in pointer variable a_ptr "<<++a1_ptr<<endl;
   return 0;
}

int main() {
   cout<<"1.Declare and initialize pointers of different data types"<<endl<<"char"<<endl;
   char a = 112;
   char *a_ptr;
   a_ptr=&a;
   cout<<"The value in a is "<<a<<endl;
   cout<<"The address of variable a is "<<(void*)&a<<endl;
   cout<<"The value in pointer variable a_ptr "<<(void*)a_ptr<<endl;
   cout<<"The value pointed by *a_ptr is "<<*a_ptr<<endl;
   cout<<"After increment,the value in pointer variable a_ptr "<<(void*)++a_ptr<<endl;
   return 0;
}


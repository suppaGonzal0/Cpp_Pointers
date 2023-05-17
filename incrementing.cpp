#include <iostream>
using namespace std;

int main() {
    
    int a =5;
    int *p = &a;
    
    cout << "Size of integer is " << sizeof(int) << " bytes" << endl;
    
    //outputL: Size of integer is 4 bytes
    
    cout << "Address of p = " << p << endl;
    //outputL: Address of p = 0x7fffdd02d51c
    
    cout << "Value of p  = " << *p << endl;
    //outputL: Value of p  = 5
    
    cout << "Address of p+1  = " << ++p << endl;
    //outputL: Address of p+1  = 0x7fffdd02d520
    
    cout << "Value of p+1  = " << ++*p << endl;
    //outputL: Value of p+1  = -2293035 (Garbage value)

    return 0;
}

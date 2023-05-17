#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a = 1025;
    int *p = &a;
    
    printf("size of integer is %d bytes\nAddress = %d, value = %d\n", sizeof(int), p, *p);
  
    /* output: 
          size of integer is 4 bytes
          Address = 105644068, value = 1025 */
    
    char *p0 = (char*)p;
    
    printf("size of char is %d byte\nAddress = %d, value = %d\n", sizeof(char), p0, *p0);
  
   /* output: 
          size of char is 1 byte
          Address = 105644068, value = 1 */
    
    printf("Address = %d, value = %d\n",  p0+1, *(p0+1));
  
    // output: Address = 105644069, value = 4
    
    // 1025 = 00000000 00000000 00000100 00000001

    return 0;
}

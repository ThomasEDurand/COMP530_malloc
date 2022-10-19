#include <stdio.h>

static inline int size2level (ssize_t size) {
    /* Your code here. */
    // Temporarily suppress the compiler warning that size is unused
    // You should remove the following line
    if(size <= 32) {return 0;}
    ssize_t a = 1;
    ssize_t i = 0;
    while(a < size){
        a <<= 1;
        i++; 
    }  
    return i-5;
}


int main () { 

	int x = 35;
	printf("testing 35.\n%d\n", size2level(x));

	x = 12;
	printf("testing 12.\n%d\n", size2level(x));

	x = 128;
	printf("testing 128.\n%d\n", size2level(x));

	x = 2049;
	printf("testing 2049.\n%d\n", size2level(x));

	return 0;
}



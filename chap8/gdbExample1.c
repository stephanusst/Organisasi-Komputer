/* 
 * gdbExample1.c 
 * Subtracts one from user integer. 
 * Demonstrate use of gdb to examine registers, etc. 
 * Bob Plantz - 5 June 2009 
 */ 
 
#include <stdio.h> 
 
int main(void) 
{ 
    register int wye; 
    int *ptr; 
    int ex; 
 
    ptr = &ex; 
    ex = 305441741; 
    wye = -1; 
    printf("Enter an integer: "); 
    scanf("%i", ptr); 
    wye += *ptr; 
    printf("The result is %i\n", wye); 
 
    return 0; 
}

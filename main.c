// Github: 0tushar0
// compiiling with g++ version 7.3.0 to attempt object oriented programming (OOP) in C

// attempt to simulate OOP
// school records

#include <stdio.h>
#include <stdlib.h>

void fun(){
	printf("Hello world\n");
}
void fun_ptr(){
	printf("fun_ptr function\n");
}
int main(){
	fun_ptr();	// prints fun_ptr function
	printf("mem addr fun_ptr: %x\n", fun_ptr);	// mem address ends in 69d
	fun();		// prints Hello world
	{
		void (*fun_ptr)(void) = &fun;
		fun_ptr();	// prints Hello world - reason is C is block scoped
		printf("mem addr fun_ptr: %x\n", fun_ptr);	// mem address ends in 68a
		// free(fun_ptr);
		// fun();		// prints Hello world
		// how will "Hello world" print?
		
		fun_ptr = (void*)(fun_ptr + 0x13);
		printf("mem addr after reassign %x\n", fun_ptr);

		fun_ptr(); // aborted: core dump

	}
	fun_ptr();		// prints fun_ptr function
	fun();			// prints Hello world
	return 0;
}

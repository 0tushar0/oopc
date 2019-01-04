// Github: 0tushar0
// compiiling with g++ version 7.3.0 to attempt object oriented programming (OOP) in C

// attempt to simulate OOP
// school records

#include <stdio.h>

void fun(){
	printf("Hello world\n");
}
void fun_ptr(){
	printf("fun_ptr function\n");
}
int main(){
	fun_ptr();	// prints fun_ptr function
	fun();		// prints Hello world
	{
		void (*fun_ptr)(void) = &fun;
		fun_ptr();	// prints Hello world - reason is C is block scoped
		fun();		// prints Hello world
	}
	fun_ptr();		// prints fun_ptr function
	fun();			// prints Hello world
	return 0;
}

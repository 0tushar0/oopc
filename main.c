#include <stdio.h>

void fun(){
	printf("Hello world\n");
}


void fun_ptr(){
	printf("fun_ptr function\n");
}

int main(){

	fun_ptr();	// prints fun_ptr function
	
	// can block scope at will in C
	{
		void (*fun_ptr)(void) = &fun;
		// works
		// (fun_ptr)();

		// doesn't print - compiles
		// fun_ptr;

		// prints
		// printf("addr: %x\n", &fun_ptr);
		fun_ptr();	// prints Hello world - reason is C is block scoped
	}

	fun_ptr();	// prints fun_ptr function
			// if not block scope, would print Hello world
	// printf("addr: %x\n", &fun_ptr);
	return 0;
}

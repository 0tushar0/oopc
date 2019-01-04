// compiiling with g++ version 7.3.0 to test block scoping
// additional experimentation on code from test.c
#include <stdio.h>

void fun(){
	printf("Hello world\n");
}


void fun_ptr(){
	printf("fun_ptr function\n");
}

int main(){

	fun_ptr();	// prints fun_ptr function
	
	{
		void (*fun_ptr)(void) = &fun;
		fun_ptr();	// prints Hello world - reason is C is block scoped
	}

	fun_ptr();
	return 0;
}

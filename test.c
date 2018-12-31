// original code obtained from 
// https://www.geeksforgeeks.org/function-pointer-in-c/
#include <stdio.h>

void fun(int a){
	printf("The value of a is %d\n", a);
}


int main(){
	void (*fun_ptr)(int) = &fun;

	/*  The above line is two statements
	 *  void (*fun_ptr)(int);
	 *  fun_ptr = &fun;
	*/
	
	(*fun_ptr)(10);
	return 0;
}



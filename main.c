// Github: 0tushar0
// compiiling with g++ version 7.3.0 to attempt object oriented programming (OOP) in C

// attempt to simulate OOP
// school records

#include <stdio.h>

struct Student{	// "object"
	char* name;
	// separate grading
	struct Grade{
		char letter_grade;
		int num_grade;
	} g;
} a;

// currently doing modifying in main...
// create scoping to modify in other methods

int main(){
	// instantiate "object"
	a.name = "Adam";
	a.g.letter_grade = 'B';
	a.g.num_grade = 85;

	printf("Name: %s\nGrade = %d, %c\n", a.name, a.g.num_grade, a.g.letter_grade);

	return 0;
}


/*
 * Following code to be used as a reference
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
*/

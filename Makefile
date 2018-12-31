# files contained right now: 

# cpp.cpp 
# main.c
# stdc89.c
# test.c

# default make, since most strict compiling conditions
standard : stdc89.c
	gcc -std=c89 -o standardC stdc89.c

oop : cpp.cpp
	g++ -c cpp.cpp
	g++ -o oop cpp.o

c : main.c
	gcc -o C main.c

test : test.c
	gcc -o original test.c

clean :
	# -f because not all files may be generated
	rm -f *.o standardC oop C original

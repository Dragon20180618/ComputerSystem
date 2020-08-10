p1.lib : p1.f90
	gfortran -c p1.f90
	gcc -c p2.c
	ar cr p1.lib p1.o p2.o
	rm *.o
clean:
	rm *.o *.lib
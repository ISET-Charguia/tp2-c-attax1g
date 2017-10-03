/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	printf ("enter les entiers");
	scanf ("%d,%d",&a,&b);
	if (a>b){
		printf ("%d est le max et %d est le min",a,b);
	}
	else {
		printf ("%d est le min et %d est le max",a,b);
	}
	return EXIT_SUCCESS;
}

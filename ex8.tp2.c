/*
 ============================================================================
 Name        : tp2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf ("entrer l'année ");
	scanf ("%d",&a);
	if (a>5){
		printf ("taux est 0.095");
	}
	else if (a>3 && a<5) {
		printf ("0.085");
	}
	else if (a<3&&a>1){
		printf ("0.065");

	}
	else {
		printf ("0.058");
	}
return 0 ;
}

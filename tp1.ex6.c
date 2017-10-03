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
	int a ;
	printf ("taper un entier ");
			scanf ("%d",&a);
			if (a%3==0) {
printf ("devisible ");
			}
			else  {
				printf("pas devisible par 3");
			}
			return 0 ;
}

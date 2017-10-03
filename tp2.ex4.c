/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long int a ;
	printf ("enter une année");
	scanf ("%d",&a);
	if ((a%400)==0 || (a%4==0)){
		printf ("bisexuel");
	}
	else {
		printf ("non bisexuel");
	}
	return 0 ;

}

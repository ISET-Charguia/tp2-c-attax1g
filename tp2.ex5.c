/*
 ============================================================================
 Name        : ex5.c
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
	printf ("entrer un entier ");
	scanf("%d",&a);
	printf ("le nombre de centaine %d les nombre de dizaine %d le nombre de unite %d",a/100,(a%100)/10,a%10);
	return 0 ;
}

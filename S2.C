/*Q.2 Write a Program to convert the given string in lowercase without using any string function.
For example,
Input:
Enter any string: HELLO WORLD

Output:
Lowercase string: hello world
*/
#include<stdio.h>

main(){
	
	int i;
	char a[100] = {'H','E','L','L','O','W','O','R','L','D'};
	
	for	(i=0; i<10; i++){
		a[i]=a[i]+32;
		printf("%c",a[i]);
		
	}
}


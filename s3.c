/*Q.3 Write a Program to convert the given string in toggle case without using any string function.
For example,
Input:
Enter any string: HelLo worLD

Output:
Toggle case string: hELlO WORld
*/



#include<stdio.h>
	
	void main(){
		
	int i;
	char a[10]={'H','e','l','L','o','w','o','r','L','D'};
	
	for(i=0;i<10;i++){
	if(a[i]<97){
	a[i]=a[i]+32;
	
	printf("%c",a[i]);
	}else{
	a[i]=a[i]-32;
		printf("%c",a[i]);
		}
	}

}

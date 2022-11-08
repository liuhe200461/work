#include<stdio.h>
#include<string.h>
int main(){
	char name[1];
	int var1 = 1,var2 = 2;
	printf("var1=%d,var2=%d\n",var1,var2);
	puts("What is your name?");
	gets(name);
	printf("<%s> is length %d\n",name,strlen(name));
	printf("var1 = %d; var2= %d\n",var1,var2);
	puts("OK");
	return 0;
} 

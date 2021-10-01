#include<stdio.h>
int count=0;
void print(char *a){
	if(*a && *a != ' '){
		print(a+1);
		putchar(*a);
	}
}
int main(){
	char a = 'A';
	print(a);
	return 0;
}

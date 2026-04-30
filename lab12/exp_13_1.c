//Implement a program to read content from a text file and print it to the console.//
#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("file.txt","r");
	if(fp==NULL){
		printf("file not found");
		return 1;
		
	}
	while((ch=fgetc(fp))!=EOF){
		putchar(ch);
	}
	fclose(fp);
	return 0;
}

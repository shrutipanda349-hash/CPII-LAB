//Implement a program to append text to an existing text file. //
#include<stdio.h>
int main(){
	FILE *fp;
	char text[100];
	fp=fopen("file.txt","a");
		if(fp==NULL){
		printf("file not found");
	       return 1;
	} 
	printf("enter text to append:");
	gets(text);
	printf(fp,"%s",text);
	fclose(fp);
	return 0;
}

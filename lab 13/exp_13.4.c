/*Write a program to compare two text files and check if their contents are 
identical*/
#include<stdio.h>
int main(){
	FILE *fp1,*fp2;
	char c1,c2;
	fp1=fopen("file.txt","r");
	fp2=fopen("text.txt","r");
	if(fp1==NULL||fp2==NULL){
		printf("error opening file");
		return 1;
	}
	do{
		c1=fgetc(fp1);
		c2=fgetc(fp2);
		if(c1!=c2){
			printf("files are not identical");
			fclose(fp1);
			fclose(fp2);
			return 0;
		}
		
	}
	while(c1!=EOF&&c2!=EOF);
	printf("files are not identical");
	fclose(fp1);
	fclose(fp2);
	return 0;
	}

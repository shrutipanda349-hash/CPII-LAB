/*Write a program to count the number of lines, words, and characters in a given 
text file. */
#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	int l=0,w=0,c=0;
	fp=fopen("file.txt","r");
	if(fp==NULL){
		printf("file not found");
		return 1;
	}
	while((ch=fgetc(fp))!=EOF){
		c++;
		if(ch=='\n')
		l++;
		if(isspace(ch))
		w++;
		
	}
	printf("lines:%d, word:%d, characters:%d",l,w,c);
	fclose(fp);
	return 0;
}

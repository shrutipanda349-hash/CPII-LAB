// macro_8//
#include<stdio.h>
void func1();
void func2();
//specifying funct1 to execute at start
#pragma exit fun2
void func1()
{
printf("Inside func1()\n");	
}
void func2()
{
	printf("Inside func2()\n");	


}
int main(){
	void func1();
	void func2();
	printf("Inside main()\n");
}

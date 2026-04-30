//macro_5//
#define VALUE 10
void main()
{
	#ifdef VALUE
	printf("VALUE defined & VALUE=%d\n ",VALUE);
	#endif
	#ifndef MAX
	printf("Macro is not defined");
	#endif
}

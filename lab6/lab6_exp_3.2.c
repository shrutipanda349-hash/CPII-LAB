/*How can you define a structure to store a date (day, month, year) and display it
in the format DD/MM/YYYY? */
#include<stdio.h>
#include<string.h>
struct date
{
	char day[20];
	char month[50];
	int year;
};
main()
{ struct date d1={"MONDAY","JANUARY",2025};
printf("Day:%s\n Month:%s\n Year:%d\n",d1.day,d1.month,d1.year);
struct date d2;
printf("enter the date d2 data:");
gets(d2.day);
gets(d2.month);
scanf(" %d",&d2.year);
printf("Day:%s\n Month:%s\n Year:%d\n",d2.day,d2.month,d2.year);
}

#include <stdio.h>
int main()
{
int day;
printf("Enter day number (1-3)");
scanf("%d",& day);
switch(day){
case 1: printf("monday");
break;
case 2:
printf(" Tuesday");
break;
case 3:
printf(" wednesday");
break ;
default: printf("invalide day");

}
return 0;
}
#include <stdio.h>
#include <conio.h>
#include <string.h> //Uso de funciones para trabajar con cadenas
main(void)
{
int x;
int y=2;
int z=1;
char palabra[]="Esta es una marquesína";
for (x=1;x<(80-strlen(palabra));x++);
{
if (y <2 || y>14)
z = z * -1;
y +=z;
textcolor(y);
gotoxy(x,2);cprintf("%s",palabra);
gotoxy(-1+x,2);printf(" ");
}
return 0;
} 

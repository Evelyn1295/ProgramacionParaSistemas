/*Descripcion del programa : Intercambio */

#include <stdio.h>

void inter(char *,char *); //Prototipo de función

int main(void)
{
	char x,y;
	char *px,*py;

	x = 'r'; y = 's'
	px = &x; py = &y
	printf("x = %c\ty = %c\n",x,y);
	inter(px,py); // inter(&x,&y);
	printf("x = %c\ty = %c\n",x,y);
	return 0;
}
void inter(char *a,char *b){
	char c;
	c = *a;
	*a = *b;
	*b = c;

}



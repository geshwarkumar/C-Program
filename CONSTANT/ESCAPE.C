/*Program to print demonstrate Escape Sequences constant*/
#include<stdio.h>
#include<conio.h>
void main()
{
	//int iter;
	clrscr();

	printf("Escape Sequences:\n");
	printf("Character=Bell(Alert)\tEscape Squence=\\a\ \tASCII Value=%d\n",'\a');
	printf("Character=Backspace\tEscape Squence=\\b\ \tASCII Value=%d\n",'\b');
	printf("Example:Curser in first position\b.\n");
	printf("\nCharacter=HorizontalTab\tEscape Squence=\\t\ \tASCII Value=%d\n",'\t');
	printf("Character=VerticalTab\tEscape Squence=\\v\ \tASCII Value=%d\n",'\v');
	printf("Character=New line\tEscape Squence=\\n\ \tASCII Value=%d\n",'\n');
	printf("Character=FormFeed\tEscape Squence=\\f\ \tASCII Value=%d\n",'\f');
	printf("Character=Carries Return\tEscape Squence=\\r\ \tASCII Value=%d\n",'\r');
	printf("Character=Quatation Mark\tEscape Squence=\\""\" \tASCII Value=%d\n",'\"');
	printf("Character=Apostrophe\tEscape Squence=\\'\ \tASCII Value=%d\n",'\'');
	printf("Character=Question Mark\tEscape Squence=\\?\ \tASCII Value=%d\n",'\?');
	printf("Character=Backslash\tEscape Squence=\\\\ \tASCII Value=%d\n",'\\');
	printf("Character=Null\tEscape Squence=\\0\ \tASCII Value=%d\n",'\0');

getch();
}

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int I=2;  
	printf("½Ð¿é¤J¦r¦ê:\n");
	while (I) 
	{
		char ENG;
		scanf("%c", &ENG);
	 	if (ENG>='A'&& ENG<='Z')
		{
			ENG=ENG+32;
			printf("%c",ENG);
  		}
  		else if(ENG>='a'&&ENG<='z')
  		{	
   			ENG=ENG-32;
   			printf("%c", ENG);
  		} 
	}
	return 0;
}

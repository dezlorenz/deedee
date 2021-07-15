#include <stdio.h>
#include <stdlib.h>

int main ()

{
  FILE *fptr;

  int a,b;
  char str[500];
  char str1;
  char fname[500];

	printf( " Input the file location : "); //Inputs the file location
	scanf("%s",fname);

    fptr = fopen(fname, "a");

   if(fptr==NULL)

    {
      printf("Error in opening file!");
      return (1);
    }


    printf( "\n Input how many lines to be appended: "); //Inputs how many line to append
    scanf("%d", &b);


    for (a = 0 ; a < b+1 ; a++)

    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
    }

    fclose (fptr);

  
    fptr = fopen (fname, "r");
    printf("\n Inside of the '%s' is: ",fname);

    str1 = fgetc(fptr);


    while

        (str1 != EOF)
    {
        printf ("%c", str1);
        str1 = fgetc(fptr);
    }

        fclose (fptr);



    return 0;

}
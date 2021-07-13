#include<stdio.h>
#include<string.h>
int main()
{
    char s[300];
    int i, length, vowels=0, consonants=0;

    printf("Input a sentence:");
    gets(s);

    i=0;

    while(s[i]!='\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            s[i]=s[i]-32;
        i++;
    }
    printf("String converted: ");
    puts(s);

    printf("\n");

    length = strlen(s);

    printf("String Length: %d\n", length);

    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97& s[i]<=122))
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
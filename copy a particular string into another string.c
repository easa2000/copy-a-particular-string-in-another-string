//program to copy n characters of string from the m position in another string

#include<stdio.h>
void main()
{
    char str[1000], copy_str[1000];
    int i=0, j=0, m, n;
    printf("\n Enter the text: ");
    gets(str);
    printf("\n Enter the position from which to start: ");
    scanf("%d",&m);
    printf("\n Enter the number of characters to be copied: ");
    scanf("%d",&n);

    i = m;
    while(str[i] != '\0' && n>0)
    {
        copy_str[j] = str[i];
        i++;
        j++;
        n--;
    }
    copy_str[j] = '\0';
    printf("\n The copied text is : ");
    puts(copy_str);
}

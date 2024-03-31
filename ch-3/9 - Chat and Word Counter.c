#include <stdio.h>
#include <conio.h>

int main()
{
    int charcount=0, wordcount=0;
    char ch;
    while((ch = getche()) != '\r') {
        charcount++;
        if(ch == ' ')
            wordcount++;
    }
    printf("Character count : %i, Word count : %i", charcount, wordcount+1);
    return 0;
}

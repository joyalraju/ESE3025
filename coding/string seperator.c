#include <stdio.h>
int main()
{
    char buf1[30],buf2[30],buf3[30];
    fscanf(stdin,"%s %s %s",buf1,buf2,buf3);
    printf("string is: %s \t %s \t %s",buf1,buf2,buf3);

    return 0;
}

//Input an integer permission code, where bit 0 = Read, bit 1 = Write, and bit 2 = Execute. Use bitwise operators to check
//enabled permissions and display whether Read, Write, and Execute permissions are available.
#include <stdio.h>

int main()
{
    int c;
    printf("Enter permission code: ");
    scanf("%d", &c);
    if (c & 1)
        printf("Read: Enabled\n");
    else
        printf("Read: Disabled\n");
    if (c & 2)
        printf("Write: Enabled\n");
    else
        printf("Write: Disabled\n");
    if (c & 4)
        printf("Execute: Enabled\n");
    else
        printf("Execute: Disabled\n");

    return 0;
}




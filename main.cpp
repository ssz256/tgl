#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf ("Checking if processor is available...");
    if (system(NULL)) puts ("Ok");
    else exit (EXIT_FAILURE);
    printf ("Executing command DIR...\n");
    i=system ("spwn build C:\\Users\\SZYMO\\Desktop\\dev\\tgl\\exampleScripts\\test.spwn");
    printf ("The value returned was: %d.\n",i);
    return 0;
    return 0;
}

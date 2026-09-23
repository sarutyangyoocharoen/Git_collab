#include <stdio.h>
int greeting(const char *name)
{
    printf("Hello, %s!\n", name);
    return 0;
}
// Print a greeting message for the specified user
int main(void)
{
    greeting("Developer A,B,C !!");
    return 0;
}

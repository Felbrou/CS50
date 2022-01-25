#include <cs50.h>
#include <stdio.h> /*declaring indentifier*/

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s!\n", name);/*function get_string for return value of variable, and printf send formatted output to stdout*/
}
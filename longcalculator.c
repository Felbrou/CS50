#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long x = get_long("x: "); //x variable set in long integer
    long y = get_long("y: "); //y variable set in long integer
    printf("%li\n" , x + y);
}

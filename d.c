#include <stdio.h>

void do_stuff(int my_arg)
{
    int i;
    for (i = 0; i < my_arg; ++i)
        printf("i = %d\n", i);
}

int main()
{
    do_stuff(2);
    return 0;
}

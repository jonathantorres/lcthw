#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int numbers[4] = {0};
    char name[4] = {'a'};

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("names each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'n';
    name[3] = '\0';

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("names each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    char *another = "Jon";
    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
    printf("another: %s\n", another);

    // extra credit
    int new_name = 10;
    void *name_ptr = name;
    memcpy(name, &new_name, sizeof(name));
    printf("name is now an int: %d\n", *((int*)name_ptr));
}

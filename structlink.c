#include <stdio.h>
#include <string.h>

//* EXAMPLE 1

struct rectangle
{
    int length;
    int width;
};

//* EXAMPLE 2
typedef struct 
{
    int length;
    int width;
}rectangle;

//* EXAMPLE 3
typedef struct position
{
    int x;
    int y;
} position;

typedef struct buildngPlant
{
    char owner[30];
    rectangle rectangle;
    position position;
}

int main()
{
    //* EXAMPLE 1

    struct rectangle myRectangle = {5, 10};

    //* EXAMPLE 2
    rectangle myRectangle = {5, 10};
    printf("Length: %d. Width: %d.\n", myRectangle.length, myRectangle.width);

    return(0);
}
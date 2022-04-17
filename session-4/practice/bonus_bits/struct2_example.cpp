//struct_example.cpp

#include <stdio.h>

struct Card
{
        int face;
        int shape;
        int color;
};

int main(void)
{
        struct Card c1;
        c1.face=1;
        c1.shape=0;
        c1.color=0;
        struct Card c2 = {2,0,0};
        struct Card deck[52] = { {1,0,0}, {2,0,0}, {3,0,0}, {4,0,0} };

        printf("2nd Card \n");
        printf("%d \n", deck[1].face);
        printf("%d \n", deck[1].shape);
        printf("%d \n", deck[1].color);
        return 0;
}

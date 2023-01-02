#include <stdio.h>

int C ( int x, int y )
{
    if(x==y || y==0){
        return 1;
    }
    else{
        return C ( x-1, y ) + C ( x-1, y-1 );
    }
}

int main()
{
    printf("Input 2 Values!\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("C( %d, %d ) = %d\n", a, b, C(a, b));
}

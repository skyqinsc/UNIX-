#include<cstdio>

using namespace std;

int main()
{
    union {
        short s;
        char c[sizeof(short)];
    }un;
    un.s=0x0102;
    //printf("%d==\n",un.s);
    printf("%c %c\n",un.c[0],un.c[1]);
    if(sizeof(short)==2){
        if(un.c[0]==1&&un.c[1]==2)
            printf("little-endian\n");
        else
            printf("big-endian\n");
    }
    else
        printf("sizeof(short) = %d\n",sizeof(short));
    return 0;
}

#include <stdio.h>
#include <unistd.h>

#define FOR_EACH(func)  func(X) func(Y)
#define PRINT(X)        printf(#X " = %u;", X##1);
#define REFRESH(X)      X = X##1;
#define DECLARE(X)      unsigned int X = 0, X##1 = 0;
#define END_PROC        putchar('\n');\
                        sleep(1);

#define RUN_LOGIC1      X##1 =  Y;\
                        Y##1 = !X;
// XOR logic
#define RUN_LOGIC2      X##1 = ((X && !Y) || (Y && !X));\
                        Y##1 = !Y;

int main(int argc, char argv[])
{
    FOR_EACH(DECLARE)
    while(1) {
        FOR_EACH(PRINT)
        RUN_LOGIC2
        FOR_EACH(REFRESH)
        END_PROC
    }
    return 0;
}

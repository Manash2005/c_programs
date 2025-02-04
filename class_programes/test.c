#include <stdio.h>

int main(int argc, char *argv[]) {
    
    argv = argv + 2;

    printf("%s\n", *(++argv));

    --argv;

    printf("%s\n", *(argv+1));

    return 0;
}
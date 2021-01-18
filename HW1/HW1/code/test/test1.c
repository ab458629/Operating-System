#include "syscall.h"

int
main(){
    int i;
    for (i=9; i>5; i--)
        PrintInt(i);
    Halt();
}

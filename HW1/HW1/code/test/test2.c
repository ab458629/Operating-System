#include "syscall.h"

int
main(){
    int i;
    for (i=20; i<=25; i++)
        PrintInt(i);
    Halt();
}

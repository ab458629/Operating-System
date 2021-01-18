#include "syscall.h"

int main(){
    int i;
    char* test = "Chenging";
	int success = Create("file1.test");
	OpenFileId fid;
	if (!success)
		MSG("Failed on creating file");

    fid = Open("file1.test");
    if (fid == -1)
        MSG("Failed on opening file");

    for (i = 0; i < 100; i++){
        int count = Write(test + i, 10, fid);
        if (count == -1)
            MSG("Failed on writing file");
    }

    success = Close(fid);
    if (!success)
		MSG("Failed on closing file"); 

    MSG("Success on creating file1.test");

    Halt();
}

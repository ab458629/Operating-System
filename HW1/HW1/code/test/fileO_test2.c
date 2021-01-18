#include "syscall.h"

int main(){
	char test[9];
	char* check = "Chenging";
	OpenFileId fid;
	int count, success, i;

	fid = Open("file1.test");
	if (fid == -1)
        MSG("Failed on opening file");
	count =  Read(test, 9, fid);
	if (count != 9)
		MSG("Failed on reading file");
	success = Close(fid);
	if (!success)
		MSG("Failed on closing file"); 

	for (i = 0; i < 9; i++){
		if (test[i] != check[i])
			MSG("Failed: reading wrong result!");
	}
	MSG("Passed! ^_^");
	Halt();
}

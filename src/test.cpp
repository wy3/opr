#include <stdio.h>
#include "opr.h"

int main(int argc, char *argv[])
{
	int ret;

	int processId = 123;
	ret = opr::Clean(processId);
	printf("process [%d]: %s\n",
		processId, ret == 1 ? "ok" : (ret == -1 ? "cannot access or does not exist" : "fail"));

	const char *processName = "example.exe";
	ret = opr::Clean(processName);
	printf("process \"%s\": %s\n",
		processName, ret == 1 ? "ok" : (ret == -1 ? "cannot access or does not exist" : "fail"));

	ret = opr::CleanAll();
	printf("%d %s cleaned\n",
		ret, ret < 2 ? "process is" : "processes are");

	return 0;
}
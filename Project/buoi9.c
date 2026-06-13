#include <stdio.h>
#include <Windows.h>


HANDLE pipe_write;
HANDLE pipe_read;

DWORD WINAPI function2(_In_ LPVOID lpParameter)
{
	while (1)
	{
		int ss_val_to_send;
		ReadFile(pipe_read, &ss_val_to_send, sizeof(ss_val_to_send), NULL, NULL);
		printf("Function2 is running... %d\n", ss_val_to_send);
		Sleep(2000);
	}
}

void function1()
{
	HANDLE thread1 = CreateThread(NULL, 0, function2, NULL, 0, NULL);
	CreatePipe(&pipe_read, &pipe_write, NULL, 1024);
	int ss_val = 0;
	while (1)
	{
		printf("Function1 is running... \n");
		ss_val++;
		WriteFile(pipe_write, &ss_val, sizeof(ss_val), NULL, NULL);
		Sleep(1000);
	}
}

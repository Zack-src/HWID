#include <Windows.h>
#include <iostream>
#include <stdio.h>

int main() {

	DWORD VolumeSerialNumber = 0;
	GetVolumeInformationA("c:\\", NULL, NULL, &VolumeSerialNumber, NULL, NULL, NULL, NULL);

	ShowWindow(GetConsoleWindow(), 0);

	char buffer[8];
	sprintf(buffer, (char*)"%x ", VolumeSerialNumber);

	delete[] buffer;
	return 0;
}
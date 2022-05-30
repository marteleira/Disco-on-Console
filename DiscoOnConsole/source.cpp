#include <iostream>
#include <thread>
#include <time.h>
#include <Windows.h>

int main(int argc, char**argv)
{
	HANDLE cwth = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitle(L"Disco on Console");
	srand(time(NULL));

	SetConsoleTextAttribute(cwth,0x6);
	std::cout << "Welcome to Disco on Console" << std::endl;
	SetConsoleTextAttribute(cwth, 0xC);
	std::cout << "The program are going to start\nIf you have a issue like epilepsy close the program fast!" << std::endl << std::endl;
	SetConsoleTextAttribute(cwth, 0xf);

	for (int i = 3; i > 0; i--)
	{
		std::cout << "Starts in: " << i << " Seconds" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	SetConsoleTextAttribute(cwth, 0xA);
	std::cout << "GO!" << std::endl<<std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(300));

	while (true)
	{
		for (int i = 0; i < rand()%12+5; i++)
		{
			char outp= rand() % 0x7F+'0';
			std::cout << outp;
		}
		SetConsoleTextAttribute(cwth, rand() % RAND_MAX-1);
	}
}
// This program was created first time in the final of 2020 by Choca742 (M4RTELEIR4 of 2020/21)
// This is my first C++ program published!
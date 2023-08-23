#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <string>
#include <memory>

using namespace std;


void func1()
{
	static std::mutex m1;

	for (int j = 0; j < 10; j++)
	{
		cout << "first running for <1>" << j << "\n";
	}
}

void func2()
{
	static std::mutex m2;

	for (int j = 0; j < 10; j++)
	{
		cout << "first running for <2>" << j << "\n";
	}
}

void func3()
{
	static std::mutex m3;

	for (int k = 0; k < 10; k++)
	{
		cout << "first running for <3>" << k << "\n";
	}
}

int main()
{
	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

	thread t1(func1);
	thread t2(func2);
	thread t3(func3);

	t1.join();
	t2.join();
	t3.join();

	std::chrono::duration<double>sec = std::chrono::system_clock::now() - start;
	std::cout << "멀티스레드 돌리는데 걸리는 시간(초) : " << sec.count() << "seconds" << std::endl;

	return 0;
}
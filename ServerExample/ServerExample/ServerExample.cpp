#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

/*int main()
{
	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

	for (int j = 0; j < 10; j++)
	{
		cout << "first running for <1>" << j << "\n";
	}
	std::chrono::duration<double>sec = std::chrono::system_clock::now() - start;
	std::cout << "for문을 돌리는데 걸리는 시간(초) : " << sec.count() << "seconds" << std::endl;

	return 0;
}*/
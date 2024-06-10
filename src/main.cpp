#include <iostream>
#include <TinyNPY.h>

int main(int argC, char* argV[])
{
	NpyArray npyArray;
	std::cout << npyArray.Shape().size() << std::endl;
	return 0;
}

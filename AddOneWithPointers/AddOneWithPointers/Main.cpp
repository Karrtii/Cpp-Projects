#include <iostream>
using namespace std;

/*
*p++   // same as *(p++): increment pointer, and dereference unincremented address
* ++p   // same as *(++p): increment pointer, and dereference incremented address
++* p   // same as ++(*p): dereference pointer, and increment the value it points to
(*p)++ // dereference pointer, and post-increment the value it points to 
*/

void addOne(int*& ptrNum)
{
	(*ptrNum)++;
}

int main()
{
	int num = 10;
	int* ptr;

	ptr = &num;
	

	addOne(ptr);

	cout << "The entered number plus one is " << num << endl;
}
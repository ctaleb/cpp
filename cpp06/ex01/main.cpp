#include "serialize.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data		aLotOfThings;
	uintptr_t	serialptr;
	Data*		ptr;

	aLotOfThings.c = 'x';
	aLotOfThings.i = 42;
	aLotOfThings.d = 84.48;
	aLotOfThings.str = "Hello World!";
	serialptr = serialize(&aLotOfThings);
	ptr = deserialize(serialptr);
	std::cout << "Original: " << &aLotOfThings << std::endl;
	std::cout << "\tc: " << aLotOfThings.c << std::endl;
	std::cout << "\ti: " << aLotOfThings.i << std::endl;
	std::cout << "\td: " << aLotOfThings.d << std::endl;
	std::cout << "\tstr: " << aLotOfThings.str << std::endl;
	std::cout << "Deserialized: " << ptr << std::endl;
	std::cout << "\tc: " << ptr->c << std::endl;
	std::cout << "\ti: " << ptr->i << std::endl;
	std::cout << "\td: " << ptr->d << std::endl;
	std::cout << "\tstr: " << ptr->str << std::endl;
	return (0);
}
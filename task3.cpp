/*
Напишете шаблонен клас Point. Той трябва да представлява 
точка в двумерно пространство, като всяка точка представлява 
наредена двойка (x, y , който да са от един и същи тип). 
Реализирайте:

Методи за достъп и манипулация на полетата(getters & setters)
operator<< - с него ще можем да принтираме цяла точка върху конзолата.
opeartor<, operator>, operator==

*/
#include <iostream>
#include <fstream>

using namespace std;

template <class T>
class Point
{
	T x, y;
public:
	Point() : x(0), y(0) {}
	Point(const T x, const T y) : x(x), y(y) {}

	friend ostream& operator<<(ostream& out, const Point<T>& put)
	{
		out << "(" << put.x << ", " << put.y << ") ";
		return out;
	}

};

int main()
{
	Point<int> mypoint('b', 'a');
	cout << mypoint; 
	return 0;
}
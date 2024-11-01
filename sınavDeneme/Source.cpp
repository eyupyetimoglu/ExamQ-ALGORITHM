#include <iostream>
using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;

public:
	Rectangle(int l=0, int b=0)
	{
		if (l > 0 && b > 0) {
			length = l;
			breadth = b;
		}
		else
			length = 1, breadth = 1;
	}
	int Area() {return length * breadth;}
};

int main()
{
	Rectangle r1(10, 5);
	Rectangle r2(15 ,10);

	Rectangle* ptr;

	Rectangle arr[] = { r1,r2 };

	int length = sizeof arr/ sizeof arr[0];

	for (int i = 0; i < length; i++) {

		ptr = &arr[i];
		cout << ptr->Area() << endl;

	}
	
}
#include <iostream>

using namespace std;

class shape
{
public :
	virtual double getArea() const = 0;
};

class Circle : public shape
{
private:
	double radius;
public:
	Circle(double r) : radius(r) {}
	double getArea() const override
	{
		return 3.141592 * radius * radius;
	}
};
class Rectangle : public shape
{
private:
	double width;
	double height;

public:
	Rectangle(double w, double h) : width(w), height(h) {}
	double getArea() const override
	{
		return width * height;
	}
};

int main()
{
	Circle c(5.0);
	Rectangle r(4.0, 6.0);

	cout << "Circle area : " << c.getArea() << endl;
	cout << "Rectangle area : " << r.getArea() << endl;

	return 0;
}
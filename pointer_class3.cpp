#include <iostream>

using namespace std;

class Rectangle
{
public:
    Rectangle(int length, int width) : length(length), width(width) {}

    void display() const
    {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
    int calculateArea() const
    {
        return (length * width);
    }

private:
    int length;
    int width;
};

Rectangle *createRectangle(int length, int width)
{
    return new Rectangle(length, width);
}

int main()
{
    Rectangle *rect = createRectangle(5, 10);
    rect->display();

    cout << " area:" << rect->calculateArea() << endl;

    delete rect;

    return 0;
}

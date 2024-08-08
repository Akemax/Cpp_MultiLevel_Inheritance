#include <iostream>

class Line 
{
public:
	Line(int length) 
	{
		this->length = length;
	}
	int GetLength() 
	{
		return length;
	}
	void DrawLine() 
	{
		for (int i = 0; i < length; i++) 
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
private:
	int length;
};

class Box : public Line 
{
public:
	Box(int l, int w) : Line(l) 
	{
		width = w;
	}
	int GetWidth() 
	{
		return width;
	}
	void DrawBox() 
	{
		for (int i = 0; i < width; i++) 
		{
			DrawLine();
		}
	}
private:
	int width;
};

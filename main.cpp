#include <iostream>

struct Pixel
{
	char r;
	char g;
	char b;
	char a;
};

struct Image
{
	Pixel pixels[1024*1024];
};

int main()
{
	Image player;
	// Stack Overflow�� �Ͼ


	Image* player = new Image;
	// �̷��� �ؾ� Heap�� �ö󰣴� (���� �޸� �Ҵ� ���)
	// ū �����͵��� Heap �޸� ������ �÷��� �Ѵ�.
}
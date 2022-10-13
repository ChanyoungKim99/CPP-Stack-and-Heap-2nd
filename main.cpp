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
	// Stack Overflow가 일어남


	Image* player = new Image;
	// 이렇게 해야 Heap에 올라간다 (동적 메모리 할당 사용)
	// 큰 데이터들은 Heap 메모리 영역에 올려야 한다.
}
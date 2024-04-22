#include<iostream>

using namespace std;

struct pt
{
	int x, y;
};

inline int area(pt a, pt b, pt c)
{
	return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

inline bool intersect_1(int a, int b, int c, int d)
{
	if (a > b) swap(a, b);
	if (c > d) swap(c, d);
	return max(a, c) <= min(b, d);
}

bool intersect(pt a, pt b, pt c, pt d)
{
	return intersect_1(a.x, b.x, c.x, d.x)
		&& intersect_1(a.y, b.y, c.y, d.y)
		&& area(a, b, c) * area(a, b, d) <= 0
		&& area(c, d, a) * area(c, d, b) <= 0;

}



int main() {
	pt a, b, c, d;

	cout << "Enter a values" << endl;
	cin >> a.x;
	cin >> a.y;
	cout << "Enter b values" << endl;
	cin >> b.x;
	cin >> b.y;
	cout << "Enter c values" << endl;
	cin >> c.x;
	cin >> c.y;
	cout << "Enter d values" << endl;
	cin >> d.x;
	cin >> d.y;

	bool res = intersect(a, b, c, d);
	if (res)
	{
		cout << "are crossing" << endl;
	}
	else
	{
		cout << "not crossing";
	}
	system("pause");
	return 0;
}


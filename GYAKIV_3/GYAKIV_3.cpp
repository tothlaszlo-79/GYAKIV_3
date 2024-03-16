#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int osszead(int a, int b)
{
	return a + b;
}
int main()
{
	clock_t kezd, veg;
	kezd = clock();
	int k;
	for (int i = 0; i < 2000000000; i++)
	{
		k = osszead(1, 1);//k = 1+1;
	}
	veg = clock();
	cout << (float)(veg - kezd) / CLK_TCK << endl;
	//fuggvenyhívassal60.84 összeadás 5.07
	system("pause");
	return 0;
}
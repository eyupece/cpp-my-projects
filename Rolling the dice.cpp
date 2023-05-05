#include <iostream>
using namespace std;

int main()
{
	int rg;
	srand(time(NULL)); // seed(tohum-besleme) ve bu ifadeyle rastgele sayı üretiyoruz. 
  // bundan sonra gelen ifade de normalde rg= rand() ifadesi yeterlidir fakat zarın üstünde 1'den 6'ya kadar sayılar olduğu için kısıtladık
	rg = rand()%6+1;
	cout << rg;
	return 0;
}

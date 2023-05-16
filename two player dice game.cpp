#include <iostream>
using namespace std;

int main()
{
	cout << "How many rounds would you like to play? ";
	
	int kacTane;
	cin >> kacTane;
	cout << kacTane << " rounds played.." << endl;
	int toplamS1 = 0;
	int toplamS2 = 0;
	int zar1;
	int zar2;

	srand(time(NULL)); 
	for (int i = 1; i <= kacTane; i++) {
		zar1 = rand() % 6 + 1;
		zar2 = rand() % 6 + 1;
		cout <<  "Round " << i << " Result" << endl;
		cout << zar1 << endl;
		cout << zar2 << endl;
		cout << "----------" << endl;

		if (zar1 > zar2)
			toplamS1++;

		else if (zar1 < zar2)
			toplamS2++;
	}
	cout << "Result = " << " Player One " << toplamS1 << " - " << toplamS2 << "  Player 2 " << endl;
	if (toplamS1 > toplamS2)
		cout << "Player 1 Won" << endl;
	else if (toplamS1 < toplamS2)
		cout << "Player 2 Won" << endl;
	else {
		cout << "Draw " << endl;
	}
	cout << endl;
	
  return 0;
}

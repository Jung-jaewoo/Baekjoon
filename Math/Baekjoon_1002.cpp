#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T, x1, y1, r1, x2, y2, r2;
	int distance;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
				cout << -1 << "\n";
			else
				cout << 0 << "\n";
			continue;
		}
		distance = (x2 - x1)*(x2 - x1) + (y2 - y1)* (y2 - y1);
		if (distance > (r1 + r2) * (r1 + r2) || distance < (r1 - r2) * (r1 - r2))
			cout << 0 << "\n";
		else if (distance == (r1 + r2) * (r1 + r2) || distance == (r1 - r2) * (r1 - r2))
			cout << 1 << "\n";
		else if ((r1 + r2) * (r1 + r2) > distance && distance > (r1 - r2) * (r1 - r2))
			cout << 2 << "\n";
	}
	return 0;
}

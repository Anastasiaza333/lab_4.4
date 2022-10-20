#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	
	double x, xp, xk, dx,R,y;

	cout << "xp = "; cin >> xp;cout << endl;
	cout << "xk = "; cin >> xk;cout << endl;
	cout << "dx = "; cin >> dx;cout << endl;
	cout << "R = "; cin >> R;cout << endl;
	cout << "x = "; cin >> x;cout << endl;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(6) << "x" << setw(6) << " |"
		<< setw(6) << "y" << setw(7) << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = -R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = -R + sqrt(R * R - (x + 8) * (x + 8));
			else
				if (-8 + R < x && x <= 2)
					y = (R * R + 2 - 9 * R) * (x - 8 - R) / 10 - R;
				else
					if (2 < x && x <= 6)
						y = 0;
					else
						y = (x - 6) * (x - 6);


		cout << "|" << setw(10) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	system("pause");
	return 0;
}
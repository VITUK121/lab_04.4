#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R, y, xp, xk, dx;
	setlocale(LC_ALL, "ukr");
	cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
	

    cout << fixed;
	cout << "|Заголовок таблицi|\n";
    cout << "-------------------\n";
    cout << "|" << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|\n";
    cout << "-------------------\n";

	for (;xp <= xk; xp+=dx) {
		if (xp <= -8 - R) {
			y = -R;
		}
		else {
			if (-8 - R < xp && xp <= -8 + R) {
				y = sqrt(R * R - xp * xp - 16 * xp - 64) - R;
			}
			else {
				if (-8 + R < xp && xp <= 2) {
					y = (-4 * R + 2 * xp + 16 + R * xp) / (10 - R);
				}
				else {
					if (2 < xp && xp <= 6) {
						y = 0;
					}
					else {
						y = pow((xp - 6), 2);
					}
				}
			}
		}
		cout << xp << "|" << y << endl;
	}

    cout << "------------\n";
    system("pause");
}
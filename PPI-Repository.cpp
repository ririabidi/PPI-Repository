#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	cout << "PPI Calulator" << endl;
	cout << fixed << setprecision(2) << endl;

	float w, h, wi, li;

	//Formulas
	int PPI, screenSize, displaySize;

	cout << "Enter the Horizontal Size in Pixels: " << endl;
	cin >> w;

	cout << "Enter the Vertical Size in Pixels: " << endl;
	cin >> h;

	cout << "Enter the Width of Screen in Inches: " << endl;
	cin >> wi;

	cout << "Enter the Length of Screen in Inches: " << endl;
	cin >> li;

	displaySize = sqrt(pow(w, 2) + pow(h, 2));

	screenSize = sqrt(pow(wi, 2) + pow(li, 2));

	PPI = (displaySize / screenSize);

	cout << "The display size is: " << displaySize << " pixels" << endl;
	cout << "The screen size is: " << screenSize << " inches" << endl;
	cout << "The pixels per inch (PPI) is: " << PPI << endl;

	return 0;
}

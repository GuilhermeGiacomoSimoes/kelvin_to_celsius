#ifdef defined(__WIN32) || defined(WIN32)
	#define OS_Windows
#endif

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

double kelvin_to_celsius(int k){
	return k - 273.15;
}

int main() {
	double k;

	cout << "K: ";
	cin >> k;

	#ifdef OS_Windows
		system("cls");
	#else
		system("clear");
	#endif

	cout << k << "k = " << kelvin_to_celsius(k) << "*c" << endl;
}

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
#include <shlwapi.h>
#pragma comment (lib, "shell32.lib")
using namespace std;

int RandU(int nMin, int nMax){
	return nMin + (int)((double)rand() / (RAND_MAX + 1) * (nMax - nMin + 1));
}

int main(int argc, const char * argv[]) {
	string urgGMAP;
	srand(time(NULL));
	urgGMAP =  (string)"https://www.google.com/maps/@" + to_string(RandU(1, 100)) + (string)"." + to_string(RandU(1, 1000)) + (string)"," + to_string(RandU(1, 100)) + (string)"." + to_string(RandU(1, 1000)) + (string)"," + to_string(RandU(6, 8)) + (string)"z";
	cout << "Go to -> \n" << urgGMAP << endl;
	ShellExecute(0, "open", urgGMAP.c_str(), 0, 0, SW_SHOWNORMAL);
	//system("pause");
	return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin("input_diamond.txt");
	ofstream fout("output_diamond.txt");

	int i, j, r;

	fin >> r;
 
    for (i = 0; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
            fout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            fout << "*";
        fout << endl;
    }
    for (i = r - 1; i >= 1; i--)
    {
        for (j = 1; j <= r - i; j++)
            fout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            fout << "*";
        fout << endl;;
    }
    fin.close();
    fout.close();
	return 0;
}

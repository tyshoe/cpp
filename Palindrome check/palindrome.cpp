#include <iostream>
#include <fstream>

using namespace std;

int isPalindrome(int n)
{
	int rev = 0;
	for (int i = n; i > 0; i /= 10)
	rev = rev * 10 + i % 10;
	
	return (n == rev);
}

void palindromeTest(int min, int max)
{
	ofstream fout("output.txt");
	for (int i = min; i <= max; i++)
		if (isPalindrome(i))
			fout << i << endl;
			fout.close();
}

int main()
{
	palindromeTest(1, 200);
	
	return 0;
}

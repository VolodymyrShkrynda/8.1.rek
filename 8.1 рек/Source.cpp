
//Рекурентний
#include <iostream>
using namespace std;
int Count(char* str, int i, int j)
{
	if (str[i] == '+' || str[i] == '-' || str[i] == '=')
		j++;
	if (i < 99)
		return Count(str,i + 1, j);
	else
		return j;
}



void Replacing(char* str, int i)
{
	if (str[i] == '+' || str[i] == '-' || str[i] == '=')
		cout << "**";
	else
		cout << str[i];
	if (i < 99)
		return Replacing(str,i+1);
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	char str[100];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Кiлькiсть потрiбних елементiв '-' '+' '='" << endl;
	cout << "k = " << Count(str,0,0) << endl;
	cout << "Змiнений рядок " << endl;
	Replacing(str, 0);
	cout << endl;


}

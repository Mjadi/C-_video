#include <iostream>
using namespace std;

string func(string name) {
	return "Hello " + name;
}

void write() {
	cout << 56 / 6;
}

int sqr(int num) {
	return num * num;
}

int main(int argc, char const *argv[])
{
	/*int x = 98;
	char y = 'd';
	string z = "hi";

	cout << x << y << endl;*/

	/*int n;
	cout << "Input data" << "\n";
	cin >> n;

	cout << n * n;*/

	int arr[5] = {78, 23, 12, 65, 45};
	int arr2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

	/*for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}*/

	/*
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << arr2[i][j];
		}
	}*/
	int r = 9;

	/*
	while (r <= 10) {
		cout << r << endl;
		r++;
	}
	*/

	/*
	do {
		cout << r << endl;
		r++;
	}while(r <= 0);*/

	/*
	if ( r == 7 )
	{
		cout << "inferior";
	}

	else if (r == 8 ) {
		cout << "exterior";
	}

	else if (r == 9) {
		cout << "matched";
	}

	else {
		cout << "did not match";
	}*/

	/*cout << func("mjadi") << endl;
	cout << func("mjadi2");
	write();

	cout << endl << sqr(92);*/

	/*int l = 4;
	int *ptrp;
	ptrp = &l;

	cout << ptrp;*/

	int n;

	/*switch (n)
		{
		    case 1:
		    	cout << "happy";
		        break;
		    case 2:
		    	cout << "sad";
		        break;
		    default: 
		    	cout << "very sad" << endl;
		}
	*/

	class Employee 
	{
	public:
		string val = "CEO";
		int bonus (int sal) {
			return sal + 9000;
		}
		int password = 8756;

	private:
		int passcode = 9876;
	};

	class staff : public Employee {
		public:
			string data = "trd78*";
	};


	Employee mjadi;
	cout << mjadi.val  << endl << mjadi.bonus(100000);
	cout <<endl<< mjadi.password;

	staff gnome;
	cout << endl << gnome.data <<endl<<gnome.bonus(2000);


	return 0;
}
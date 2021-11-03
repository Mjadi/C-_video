#include <iostream>
#include <stdio.h>
using namespace std;

// classes and oops
class ourclass
{
public:
	string name = "classes opp";

private:
	int code = 5672;
};

class theirclass : public ourclass {
	public: 
		string name1 = "bett";


};

int main()
{
	// multii arrays
	int arr[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {8, 9, 10, 11}};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << arr[i][j] << endl;
		}
	}

	ourclass me;
	theirclass you;
	cout << me.name << "\n" << you.name1;

	// switch statements
	int n;

	switch (n)
		{
		    case 1:
		    	cout << "happy";
		        break;
		    case 2:
		    	cout << "sad";
		        break;
		    default: 
		    	cout << "\n" << "very sad" << endl;
		}

	// pointers
	int x = 45;
	int *ptrp;

	ptrp = &x;
	printf("%d", *ptrp);

	return 0;
}
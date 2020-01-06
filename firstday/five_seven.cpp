#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> v;

	cin >> n;

	for (int i = 5; i <= n; i++)
	{
		if (i % 5 == 0 || i % 7 == 0)
		{
			v.push_back(i);
		}
	}

	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << " ";
	}

	return 0;
	//Ê±¼ä¸´ÔÓ¶È£ºO(n)
}

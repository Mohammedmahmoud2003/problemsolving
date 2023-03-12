#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string scales;
	cin >> scales;
	char arr_left[scales.length()];
	char arr_right[scales.length()];
	int counter = 0;
	int counter2 = 0;
	for (int i = 0; i < scales.length(); i++)
	{
		if (scales[i] != '|')
		{
			counter++;
			arr_left[i] = scales[i];
		}
		else
		{
			i = scales.length();
		}
	}

	counter2 = scales.length() - counter;
	counter2 -= 1;

	for (int d = counter+1 , t = 0; d < scales.length(), t < counter2; t++, d++)
	{
		arr_right[t] = scales[d];

	}

	string p;
	cin >> p;
	int w = counter;
	int s = counter2;
	int length_input = p.length();
	for (int u = length_input, q = 0; u > 0, q < length_input; q++, u--)
	{
	 if (counter2 > counter)
		{
			counter++;
			arr_left[w] = p[q];
			w++;

		}
		else {
			counter2++;

			arr_right[s] = p[q];
			s++;
		}

	}
	if(counter==counter2)
	{for (int a = 0; a <counter; a++)
	{
		cout << arr_left[a];
	}
	cout << "|" ;
	for (int v = 0; v < counter2; v++)
	{
		cout << arr_right[v];
	}

	}else{
		cout<<"Impossible";
	}
	

}

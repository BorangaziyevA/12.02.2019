#include<iostream>
#include<iomanip>
#include<locale.h>
#include<Windows.h>

using namespace std;

int AreaRect(int a, int b)
{
	return a * b;
}

void Figure1(int n, char ch = '*', int type = 0);

template<typename T>
void FillDiagonal(T a[][30], int n);

template<typename T>
void PrintArray(T a[][30], int n, int m);

template<typename T>
void FillArray(T a[][30], int n, int m);

template <typename T>
void sortArray(T a[][30], int n, int m, char sort);

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int n = 5;
	int flag;
	double a[30][30] = { 0 };
	do
	{

		FillArray(a, n, n);
		sortArray(a, n, n, 'd');
		PrintArray(a, n, n);

		cout << "Continue?1/0";
		cin >> flag;

	} while (flag == 1);

}

void Figure1(int n, char ch = '*', int type = 0)
{
	int x = 1;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == n - 1 || j == 0 || i == j)
			{
				cout << ch;
			}
			else cout << " ";
		}
		cout << endl;
	}

	cout << endl;


	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i >= j)
			{
				cout << ch;
			}
			else cout << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == n - j - 1)
			{
				cout << ch;
			}
			else cout << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == n - j - 1 || i + j <= (n + 1 / 2) - 1)
			{
				cout << ch;
			}
			else cout << " ";
		}
		cout << endl;
	}

}
template <typename T>
void sortArray(T a[][30], int n, int m, char sort)
{
	if (sort == 'a')
	{
		for (size_t i = 0; i < n ; i++)
		{
			for (size_t i1 = 0; i1 < n-1; i1++)
			{
			for (size_t j = 0; j < m - 1; j++)
			{
				if (a[i][j] > a[i][j + 1])
				{
					swap(a[i][j], a[i][j + 1]);
				}

			}

			}

		}

	}
	else
		for (size_t i = 0; i < n; i++)
		{
			for (size_t i1 = 0; i1 < n - 1; i1++)
			{
				for (size_t j = 0; j < m - 1; j++)
				{
					if (a[i][j] > a[i][j + 1])
					{
						swap(a[i][j], a[i][j + 1]);
					}

				}

			}

		}

}
template<typename T>
void FillArray(T a[][30], int n, int m)
{
	T x;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			 x =  1+rand() % 10;
			a[i][j] = (rand() % 100)/x;
		}

	}
}
template<typename T>
void PrintArray(T a[][30], int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
template<typename T>
void FillDiagonal(T a[][30], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j || i == n - 1 - j)
			{
				a[i][j] = 1;
			}
			else a[i][j] = 0;

		}

	}
}
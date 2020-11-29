// Lab_05_5.cpp

#include <iostream>
#include <cmath>

using namespace std;

int numbersSum(int N, const int sum);
int numberCount(int N, const int count);
int maxNumber(int N, const int max);
int minNumber(int N, const int min);

int main()
{
	int N;
	cout << "N = "; cin >> N;
	cout << "___________________________________" << endl;
	cout << "Сума чисел: " << numbersSum(N, 0) << endl;
	cout << "Кількість чисел: " << numberCount(N, 0) << endl;
	cout << "Максимальне число: " << maxNumber(N, 0) << endl;
	cout << "Мінімальне число: " << minNumber(N, 10) << endl;
	cout << "Глибина рекурсії: " << numberCount(N, 0) << endl;
	cout << "___________________________________" << endl;
}

int numbersSum(int N, int sum)
{
	if (N != 0)
	{
		int num = N % 10;
		N /= 10;
		return numbersSum(N, sum += num);
	}
	return sum;
}

int numberCount(int N, int count)
{
	if (N != 0)
	{
		N /= 10;
		return numberCount(N, count += 1);
	}
	return count;
}

int maxNumber(int N, int max)
{
	if (N != 0)
	{
		int num = N % 10;
		N /= 10;
		if (max < num)
			max = num;
		return maxNumber(N, max);
	}
	return max;
}

int minNumber(int N, int min)
{
	if (N != 0)
	{
		int num = N % 10;
		N /= 10;
		if (min > num)
			min = num;
		return minNumber(N, min);
	}
	return min;
}
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
bigboss:
	int N;
	cout << "Введите номер задания: " << "\n";
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int n = 0, a, b, counter=0;
		cout << "Введите число:" << endl;
		cin >> a;
		cin >> b;
		
		for (int i = b; i >= a; i--)
		{
			cout  << i << "\n";
			n += i;
			counter++;
		}
	cout << "Количество этих чисел - " << counter << endl; 
	}
	break;
	case 2:
	{
		int n, a, b, h, x, f, counter = 0;
		cout << "Введите число:" << endl;
		cin >> a;
		cin >> b;
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			h = (b - a) / n;
			x = a + i*h;
			f = 1 - sin(x);
		}
		cout << "Значение функции: " << f << endl;
	}
	break;
	case 3:
	{
		int m, n, k, t;
		scanf("%d %d", &m, &n);
		k = 1;
		t = 1;
		while (k*k < n) {
			if (k*k >= m) 
			t = t + 1;
			k = k + 1;
		}
		printf("%d", t);
	}
	break;
	case 4:
	{
		int n, k;
		cout << "Ввести данные" << "\n";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << 2 * i + 1 << "\n";
		k = (2 * i + 1) % 5;
		}
		cout << "Число кратно к пяти" << k << "\n";
	}
	break;
	case 5:
	{
		
		for (int i = 11; i < 99; i++)
		{
			cout << "Квадраты всех чисел: " << pow(i,2) << endl;

		}
	}
	break;
	case 7:
	{
		int n, ran, sum=0;
		cin >> n;
	
		
			for (int i = 1; i<=n; i++)
			{

				sum +=-i;
      
			}
			  
		cout << "Количество отрицательных чисел: " << sum << "\n";
          
		
		
	}
	break;
	case 8:
	{
		int i,sum=0;
		int n;
		cin >> n;
		for ( i = 0; i <=n; i++)
		{
			while (i == 1 || i == 2 || i == 18)
				sum += i;
				sum++;			
				cout << "Cумма равных между собой чисел" << sum<< "\n";
		}
		
	}
	break;
	case 9:
	{
		int ycheniki, os_informatika, sum = 0;
		srand(time(NULL));
		for (ycheniki = 1; ycheniki <= 20; ycheniki++)
		{
			os_informatika = 1 + rand() % 5;
			while (os_informatika == 5);
			{
				sum += 5;
			sum++;
			}
				
			cout << sum << " имеют по информатике-5 " << endl;
		}
	
	}
	break;

	default:
		break;
}



goto bigboss;	






	

}
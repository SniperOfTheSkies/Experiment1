#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main()

{


	// prices of tickets
	int Price_P, Price_S, Price_B, Price_GA;

	Price_P = 250, Price_S = 100, Price_B = 50, Price_GA = 25;

	// quantity of tickets sold
	int Sold_P, Sold_S, Sold_B, Sold_GA;
	int Total_Tickets_Sold, Total_Tickets_Sales;

	// FOR PREMIUM
	cout << "Enter the number of Premium tickets sold:";
	cin >> Sold_P;
	cout << "The total sales for premium tickets is:" << (Sold_P * Price_P) << endl;

	cout << endl;

	// FOR SIDELINE
	cout << "Enter the number of Sideline tickets sold:";
	cin >> Sold_S;
	cout << "The total sales for Sideline tickets is:" << (Sold_S * Price_S) << endl;

	cout << endl;

	// FOR BOX
	cout << "Enter the number of Box tickets sold:";
	cin >> Sold_B;
	cout << "The total sales for Box tickets is:" << (Sold_B * Price_B) << endl;

	cout << endl;

	// FOR GENERAL ADMISSION
	cout << "Enter the number of General admission tickets sold:";
	cin >> Sold_GA;
	cout << "The total sales for General amission tickets is:" << (Sold_GA * Price_GA) << endl;

	cout << endl;

	//NUMBER TICKETS SOLD
	Total_Tickets_Sold = Sold_P + Sold_S + Sold_B + Sold_GA;

	cout << "The total tickets sold is:" << Total_Tickets_Sold;

	cout << endl;

	//TOTAL TICKETS SALES
	Total_Tickets_Sales = Sold_GA * Price_GA + Sold_GA * Price_GA + Sold_S * Price_S + Sold_P * Price_P;
	cout << "The total ticket sales is:" << Total_Tickets_Sales;

	_getch();
	return 0;
}
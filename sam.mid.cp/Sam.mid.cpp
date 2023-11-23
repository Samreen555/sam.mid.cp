#include<iostream>
using namespace std;
int main()
{
	int initial_quantity, current_quantity, threshold, restock_quantity, sold_quantity;
	cout << "ENTER THE INITIAL QUANTITY:";
	cin >> initial_quantity;
	cout << "\n ENTER THE THRESHOLD QUANTITY:";
	cin >> threshold;
	current_quantity = initial_quantity;
	cout << "\n CURRENT QUANTITY:" << current_quantity << endl;
	cout << "\n ENTER THE CHOICES(1-3):"<<endl;
	cout << "1.soldquantity:"<<endl;
	cout << "2.restockquantity : " << endl;
	cout << "3.exit : ";
	int choice;
	cout << "\nENTER THE CHOICE:";
	cin >> choice;
	do
	{
		switch (choice)
		{
		    case 1:
			cout << "ENTER THE SOLDQUANTITY:";
			cin >> sold_quantity;
			current_quantity -= sold_quantity;
			cout << "SOLD:" << sold_quantity << "  REMAINING QUANTITY:" << current_quantity;
			{
				if (current_quantity <= sold_quantity)
					cout << "\nSALES CAN BE DONE BECAUSE SOLD QUANTITY IS:" << sold_quantity;
				else
					cout << "\n SALES CANN'T BE DONE:";
			}
			break;
		    case 2:
			cout << "ENTER THE RESTOCK QUANTITY:";
			cin >> restock_quantity;
			current_quantity += restock_quantity;
			cout << "\nSOLD:" << restock_quantity << "REMAINING QUANTITY" << current_quantity;
			break;
	     	case 3:
			cout << "EXIT THE PROGRAM.";
			break;
		   default:
			cout << "INVALID CHOICE:";
		}
	} 
	while (choice != 3);
	return 0;
}
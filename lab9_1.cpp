#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double balance,rate,paypyear;

	cout << "Enter initial loan: ";
	cin >> balance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> paypyear;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 

	int year = 1;

	do{
		cout << setw(13) << left << year++; 
		cout << setw(13) << left << balance;

		double interest = balance * rate / 100;
		balance += interest;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << balance;

		if(paypyear > balance){
			cout << setw(13) << left << balance;
			balance = 0;
		}
		else{
			cout << setw(13) << left << paypyear;
			balance -= paypyear;
		}
		cout << setw(13) << left << balance;
		cout << "\n";	
	} while(balance != 0);

	
	
	return 0;
}

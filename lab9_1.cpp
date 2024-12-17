#include<iostream>
 #include<iomanip> 
using namespace std;
 int main(){
    double loan, rate, pay;
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> pay;
    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";
    
    cout << fixed << setprecision(2);
    int i = 1;
    double PrevBalance = loan;
    double Interest, Total, Payment, NewBalance;
    while(PrevBalance != 0) {
        Interest = PrevBalance * (rate/100);
        Total = PrevBalance + Interest;
        if(Total > pay) Payment = pay;
        else Payment = Total;
        NewBalance = Total - Payment;
        
        cout << setw(13) << left << i;
        cout << setw(13) << left << PrevBalance; 
        cout << setw(13) << left << Interest; 
        cout << setw(13) << left << Total; 
        cout << setw(13) << left << Payment ;
        cout << setw(13) << left << NewBalance;
        cout << "\n";
        
        i++;
        PrevBalance = NewBalance;
    }
    return 0;
 }
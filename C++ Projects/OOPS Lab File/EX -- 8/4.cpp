#include <bits/stdc++.h>

using namespace std;

class Account{
    private:
    double balance;float rate;

    public:
    Account(int balance ,int rate){
        this->balance=balance;
    }

    void deposit(double money){
        balance+=money;
    }

    void withdraw(double money){
        if (money > balance)
        {
            cout<<"Insufficient balance in your bank account";
        }else
        {
            balance-=money;
        }
    }

    double compound(double principal,int n,float time){
        double amount = principal * pow(1 + (rate / n), n * time);
        return amount;
    }

    void showBalance(){
        cout<<"Your account balance is "<<balance<<endl;
    }
};

int main(){

    Account vishal(0,5.5);

    while (true)
    {
        int option;
        cout << "\nBanking Menu\n" << endl
             << "Select a option from menu :-\n"<<endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. withdraw Money" << endl;
        cout << "3. Show compound intrest" << endl;
        cout << "4. Account Balance" << endl;
        cout << "5. Exit" << endl;

        cout << "\nSelect your option :- ";
        cin >> option;
        cout<<endl;

        double money;

        switch (option)
        {
        case 1:
            cout << "Enter amount :- ";
            cin >> money;
            vishal.deposit(money);
            break;

        case 2:
            cout << "Enter amount :- ";
            cin >> money;
            vishal.withdraw(money);
            break;

        case 3:
            double principal;
            int n;
            float time;
            cout << "Enter principal amount :- ";
            cin >> principal;
            cout << "Enter number of time intrest compounded per year :- ";
            cin >> n;
            cout << "Enter time :- ";
            cin >> time;

            cout << "Amount of compound intrest is ";
            cout << vishal.compound(principal, n, time)<<endl;
            break;

        case 4:
            vishal.showBalance();
            break;

        case 5:
            exit(1);

        default:
            cout << "Invalid option" << endl;
            break;
        }
    }
    
    
}
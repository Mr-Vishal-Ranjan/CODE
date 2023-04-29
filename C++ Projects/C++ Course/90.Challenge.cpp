#include <iostream>
#include <cstdio>

using namespace std ;

int main(){
    
    while (1)
    {
        int x, y, z;
        char choice;

        cout << "--------------------------\n--------------------------\nEnter your choice :--\n";
        cout << " P - Print numbers \n A - Add numbers \n M - Display mean of the numbers \n S - Display the smallest number \n L - Display the largest number \n Q - Quit\n--------------------------\n--------------------------\n ";
        cin >> choice;

        if (choice == 'P' || choice == 'p')
        {
            cout << "\nEnter your number for print on screen :-\n";
            cin >> x;
            cout << "Your desired number = " << x << "\n";
        }

        if (choice == 'A' || choice == 'a')
        {
            cout << " Enter two numbers for add :-";
            cin >> x >> y;
            cout << "Sum of " << x << " and " << y << " is " << x + y << "\n";
        }

        if (choice == 'M' || choice == 'm')
        {
            int num[100];
            int i, data;
            float sum = 0;
            float mean;
            cout << "Enter number of data for mean\n";
            cin >> data;
            cout << "Enter the data\n";

            for (i = 0; i < data; i++)
            {
                cin >> num[i];
                sum = sum + num[i];
            }

            mean = sum / data;
            cout << "Mean of data is " << mean << endl;
        }

        if (choice == 'S' || choice == 's')
        {
            int num[100];
            int i, data;
            int smallest = 99999;

            cout << "Enter number of data " << endl;
            cin >> data;
            cout << "Enter the data \n";
            for (i = 0; i < data; i++)
            {
                cin >> num[i];
            }

            for (i = 0; i < data; i++)
            {
                if (smallest > num[i])
                    smallest = num[i];
                else
                    smallest = smallest;
            }

            cout << "Smallest number is " << smallest << endl;
        }

        if (choice == 'L' || choice == 'l')
        {
            int num[100];
            int i, data;
            int largest = 0;

            cout << "Enter number of data " << endl;
            cin >> data;
            cout << "Enter the data \n";
            for (i = 0; i < data; i++)
            {
                cin >> num[i];
            }

            for (i = 0; i < data; i++)
            {
                if (largest < num[i])
                    largest = num[i];
                else
                    largest = largest;
            }

            cout << "largest number is " << largest << endl;
        }

        if (choice == 'Q' || choice == 'q')
        {
            break;
        }
    }
    
    
}
#include <iostream>
#include <cstdio>

using namespace std;

int x, y, z;

auto Print_numbers(){

    cout << "\nEnter your number for print on screen :-\n";
    cin >> x;   
    cout << "Your desired number = " << x << "\n";
}

auto Add_numbers(){

    cout << " Enter two numbers for add :-";
            cin >> x >> y;
            cout << "Sum of " << x << " and " << y << " is " << x + y << "\n";
}

auto Mean_of_the_numbers(){

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

auto Display_the_smallest_number(){

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

auto Display_the_largest_number(){

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

auto Quit(){

    break;

}

int main()
{

    while (1)
    {

        char choice;

        cout << "--------------------------\n--------------------------\nEnter your choice :--\n";
        cout << " P - Print numbers \n A - Add numbers \n M - Display mean of the numbers \n S - Display the smallest number \n L - Display the largest number \n Q - Quit\n--------------------------\n--------------------------\n ";
        cin >> choice;

        if (choice == 'P' || choice == 'p')
        {
            Print_numbers();
        }

        if (choice == 'A' || choice == 'a')
        {
            Add_numbers();
        }

        if (choice == 'M' || choice == 'm')
        {
            Mean_of_the_numbers();
        }

        if (choice == 'S' || choice == 's')
        {
            Display_the_smallest_number();
        }

        if (choice == 'L' || choice == 'l')
        {
            Display_the_largest_number();
        }

        if (choice == 'Q' || choice == 'q')
        {
            Quit();
        }

        else
        cout << "WARNING >> Enter a valid choice" << endl ;
    }
}


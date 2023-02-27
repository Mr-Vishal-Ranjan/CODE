#include <stdio.h>
float main()
{

    float sales, ads, x, i, profit, nextprofit;
    sales = 100;
    ads = 1000;

    while (1)
    {
        profit = (sales * 500) - (10000) - (ads);
        sales = ((0.2) * (sales)) + sales;
        ads = (2 * ads);
        nextprofit = (sales * 500) - (10000) - (ads);
        if (nextprofit < 0)
        {
            printf("\nNumber of Super Duper sales is %.0f\n", sales);
            printf("The advertisment budget is %.0f\n", ads);
            printf("Net Profit = %.2f\n", profit);
            break;
        }

        profit = nextprofit;
        
    }
}
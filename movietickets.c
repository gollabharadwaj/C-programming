#include <stdio.h>
#include <string.h>
struct status
{
    int booked[100];
    int bn;
} b1, b2, b3;
struct status arrSort(struct status b)
{
    int i, j, temp;
    for (i = 0; i < b.bn; i++)
    {
        for (j = i; j < b.bn; j++)
        {
            if (b.booked[i] > b.booked[j])
            {
                temp = b.booked[i];
                b.booked[i] = b.booked[j];
                b.booked[j] = temp;
            }
        }
    }
    return b;
}
int editPrice(int pos)
{
    printf("Enter New Price\n");
    scanf("%d", &pos);
    return pos;
}
void displayRes(struct status s)
{
    int i;

    if (s.bn > 0)
    {
        printf("Booked Seats are: ");
        for (i = 0; i < s.bn; i++)
        {
            printf("%d ", s.booked[i]);
        }
        printf("\n");
    }
    else
    {
        printf("No seats are booked\n");
    }
}
struct status bookTicket1(struct status b, int pos)
{
    int seats, i , j , selected[100], count, cost, temp, cc = 0;

    printf("Enter Number of Seats\n");
    scanf("%d", &seats);
    printf("Enter Seat Numbers:");
    for ( i = 0; i < seats; i++)
    {
        count = 0;
        temp = pos;
        scanf("%d", &selected[i]);
        if (selected[i] > 100 || selected[i] < 0)
        {
            printf("%d Not a Valid Seat\n", selected[i]);
            count = 1;
            break;
        }
        if (b.bn != 0)
        {
            for ( j = 0; j < b.bn; j++)
            {
                if (selected[i] == b.booked[j])
                {
                    printf("Seats are already selected\n");
                    count = 1;
                    temp = 0;
                    break;
                }
            }
            
        }
        if (count == 1)
        {
            break;
        }
        b.bn += 1;
    }

    if (count == 0)

    {
        int a = b.bn - seats;
        for (j = a; j < b.bn; j++)
        {
            b.booked[j] = selected[j - a];
        }
        cost = seats * temp;
        printf("\t-------------------THEATRE BOOKING TICKET-------------------\n");
        printf("\t============================================================\n");
        printf("\t\tBooked Seats are: ");
        for ( i = 0; i < seats; i++)
        {
            printf("%d ", selected[i]);
        }
        printf("\n");
        printf("\t\tCost is: %d\n", cost);
        printf("\t\tMovie: RRR\n");
        printf("\t                                  Date      : 07-01-2022\n");
        printf("\t                                  Time      : 11:00 AM\n");
        printf("\t                                  Hall      : 01\n");
        printf("\t============================================================\n");
        printf("\t\t\tPrinting Receipt\n");
    }
    b = arrSort(b);
    return b;
}
struct status bookTicket2(struct status b, int pos)
{
    int seats, i , j , selected[100], count, cost, temp, cc = 0;

    printf("Enter Number of Seats\n");
    scanf("%d", &seats);
    printf("Enter Seat Numbers:");
    for ( i = 0; i < seats; i++)
    {
        count = 0;
        temp = pos;
        scanf("%d", &selected[i]);
        if (selected[i] > 100 || selected[i] < 0)
        {
            printf("%d Not a Valid Seat\n", selected[i]);
            count = 1;
            break;
        }
        if (b.bn != 0)
        {
            for ( j = 0; j < b.bn; j++)
            {
                if (selected[i] == b.booked[j])
                {
                    printf("Seats are already selected\n");
                    count = 1;
                    temp = 0;
                    break;
                }
            }
            
        }
        if (count == 1)
        {
            break;
        }
        b.bn += 1;
    }

    if (count == 0)

    {
        int a = b.bn - seats;
        for ( j = a; j < b.bn; j++)
        {
            b.booked[j] = selected[j - a];
        }
        cost = seats * temp;
        printf("\t-------------------THEATER BOOKING TICKET-------------------\n");
        printf("\t============================================================\n");
        printf("\t\tBooked Seats are: ");
        for ( i = 0; i < seats; i++)
        {
            printf("%d ", selected[i]);
        }
        printf("\n");
        printf("\t\tCost is: %d\n", cost);
        printf("\t\tMovie: Spiderman No Way Home\n");
        printf("\t                                  Date      : 16-12-2021\n");
        printf("\t                                  Time      : 03:00 PM\n");
        printf("\t                                  Hall      : 02\n");
        printf("\t============================================================\n");
        printf("\t\t\tPrinting Receipt\n");
    }
    b = arrSort(b);
    return b;
}
struct status bookTicket3(struct status b, int pos)
{
    int seats, i , j , selected[100], count, cost, temp, cc = 0;
    printf("Enter Number of Seats\n");
    scanf("%d", &seats);
    printf("Enter Seat Numbers:");
    for ( i = 0; i < seats; i++)
    {
        count = 0;
        temp = pos;
        scanf("%d", &selected[i]);
        if (selected[i] > 100 || selected[i] < 0)
        {
            printf("%d Not a Valid Seat\n", selected[i]);
            count = 1;
            break;
        }
        if (b.bn != 0)
        {
            for ( j = 0; j < b.bn; j++)
            {
                if (selected[i] == b.booked[j])
                {
                    printf("Seats are already selected\n");
                    count = 1;
                    temp = 0;
                    break;
                }
            }
            
        }
        if (count == 1)
        {
            break;
        }
        b.bn += 1;
    }

    if (count == 0)

    {
        int a = b.bn - seats;
        for ( j = a; j < b.bn; j++)
        {
            b.booked[j] = selected[j - a];
        }
        cost = seats * temp;
        printf("\t-------------------THEATER BOOKING TICKET-------------------\n");
        printf("\t============================================================\n");
        printf("\t\tBooked Seats are: ");
        for ( i = 0; i < seats; i++)
        {
            printf("%d ", selected[i]);
        }
        printf("\n");
        printf("\t\tCost is: %d\n", cost);
        printf("\t\tMovie: Radhe Shyam\n");
        printf("\t                                  Date      : 14-01-2022\n");
        printf("\t                                  Time      : 07:30 PM\n");
        printf("\t                                  Hall      : 03\n");
        printf("\t============================================================\n");
        printf("\t\t\tPrinting Receipt\n");
    }
    b = arrSort(b);
    return b;
}
void displaySeats(struct status b)
{
    int i, j, f = 0;
    printf("---------------------------------SCREEN-----------------------------------");
    for (i = 1; i <= 100; i++)
    {
        f = 0;
        if (i % 10 == 1)
        {
            printf("\n\n");
        }
        for (j = 0; j < b.bn; j++)
        {
            if (i == b.booked[j])
            {
                printf("-\t");
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int seats[100], choice, i, j, price, nos, y, cost = 0, count, temp, l = 0;
    int x = 1;
    int pos = 150;
    while (x)
    {
        printf("                 Simple Movie Ticket Booking System\n");
        printf(" ==================================================================\n");
        printf("||             1- To edit price of ticket (only admin):           ||\n");
        printf("||             2- To view reserved tickets (only admin):          ||\n");
        printf("||             3- To Purchase Ticket:                             ||\n");
        printf("||             4- Exit system:                                    ||\n");
        printf("||================================================================||\n");
        printf("  Enter your choice:\n");
        scanf("%d", &choice);
        if (choice == 4)
        {
            printf("Thanks for visiting\n");
            break;
        }
        int f;
        printf("Enter 1 for RRR\n");
        printf("Enter 2 for Spiderman No Way Home\n");
        printf("Enter 3 for Radhe Shyam\n");
        printf("Select Movie ");
        scanf("%d", &f);
        if (choice == 1)
        {
            pos = editPrice(pos);
            printf("New Price is: %d\n", pos);
        }
        else if (choice == 2)
        {

            switch (f)
            {
            case 1:
                displayRes(b1);
                break;
            case 2:
                displayRes(b2);

                break;
            case 3:
                displayRes(b3);

                break;
            default:
                break;
            }
        }
        else if (choice == 3)
        {

            switch (f)
            {
            case 1:
                displaySeats(b1);

                b1 = bookTicket1(b1, pos);
                b1;

                break;
            case 2:
                displaySeats(b2);
                b2 = bookTicket2(b2, pos);
                b2;
                break;
            case 3:
                displaySeats(b3);
                b3 = bookTicket3(b3, pos);
                b3;
                break;
            default:
                break;
            }
        }

        else
        {
            printf("Not a valid option\n");
            break;
        }
    }
    return 0;
}

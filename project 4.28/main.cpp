 #include <stdio.h>

int main() {
    int employeeType;
    double salary = 0.0;

    printf("Enter employee type (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker): ");
    scanf("%d", &employeeType);

    switch (employeeType) {
        case 1: {  
            printf("Enter fixed weekly salary: ");
            scanf("%lf", &salary);
            break;
        }
        case 2: {  
            double hoursWorked, hourlyRate;
            printf("Enter hours worked: ");
            scanf("%lf", &hoursWorked);
            printf("Enter hourly rate: ");
            scanf("%lf", &hourlyRate);
            if (hoursWorked > 40) {
                salary = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
            } else {
                salary = hoursWorked * hourlyRate;
            }
            break;
        }
        case 3: {  
            double sales;
            printf("Enter gross sales: ");
            scanf("%lf", &sales);
            salary = 250 + 0.057 * sales;
            break;
        }
        case 4: {  
            int itemsProduced;
            double wagePerItem;
            printf("Enter number of items produced: ");
            scanf("%d", &itemsProduced);
            printf("Enter wage per item: ");
            scanf("%lf", &wagePerItem);
            salary = itemsProduced * wagePerItem;
            break;
        }
        default:
            printf("Invalid employee type!\n");
            return 1;
    }

    printf("Total salary is: $%.2f\n", salary);

    return 0;
}

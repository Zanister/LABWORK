#include <stdio.h>
float avgCal(int arr11[3][5]);
float avgTest(int arr12[3][5]);

int main()
{
    int matrix[3][5];
    for(int i = 0; i < 3; i++)
    {
        printf("Enter marks of student:- %d\n", i+1);
        for(int j = 0;j < 5;j++)
        {
            printf("Enter test marks : %d:", j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    avgCal(matrix);
    avgTest(matrix);
    return 0;
}

float avgCal(int arr1[3][5])
{
    int sum1 =0, sum2 = 0, sum3 = 0;
    float avg1, avg2, avg3;

    sum1 = arr1[0][0]+arr1[0][1]+arr1[0][2]+arr1[0][3]+arr1[0][4];
    avg1 = sum1/5;
    printf("The average test score of student 1 is: %f\n", avg1);

    sum2 = arr1[1][0]+arr1[1][1]+arr1[1][2]+arr1[1][3]+arr1[1][4];
    avg2 = sum2/5;

    printf("The average test score of student 1 is: %f\n", avg1);

    sum2 = arr[1][0]+arr[1][1]+arr[1][2]+arr[1][3]+arr[1][4];
    avg2 = sum2/5;
    printf("The average test score of student 2 is: %f\n", avg2);

    sum3 = arr[2][0]+arr[2][1]+arr[2][2]+arr[2][3]+arr[2][4];
    avg3 = sum3/5;
    printf("The average test score of student 1 is: %f\n", avg3);

    return 0;
}

float avgTest(int arr2[3][5])
{
    int test1 = 0, test2 = 0, test3, test4, test5;
    float avg1, avg2, avg3, avg4, avg5;

    test1 = arr2[0][0]+arr2[1][0]+arr2[2][0];
    avg1 = test1/3;
    printf("The average in test 1 is: %f\n", avg1);

    test2 = arr2[0][1]+arr2[1][1]+arr2[2][1];
    avg2 = test2/3;
    printf("The average in test 2 is: %f\n", avg2);

    test3 = arr2[0][2]+arr2[1][2]+arr2[2][2];
    avg3 = test3/3;
    printf("The average in test 3 is: %f\n", avg3);

    test4 = arr2[0][3]+arr2[1][3]+arr2[2][3];
    avg4 = test4/3;
    printf("The average in test 4 is: %f\n", avg4);

    test5 = arr2[0][4]+arr2[1][4]+arr2[2][4];
    avg5 = test5/3;
    printf("The average in test 5 is: %f\n", avg5);

    return 0;
}
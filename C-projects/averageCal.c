#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count;
    float sum = 0, average;

    printf("How many numbers will you enter? ");
    scanf("%d", &count);

    //alocate memory for 'count' floats
    float *numbers = (float *)malloc(count * sizeof(float));
    if (numbers == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
     //get user input
    for (int i = 0; i < count; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    //calculate and display average
    average = sum / count;
    printf("The average is: %.2f\n", average);

    //free allocated memory
    free(numbers);
    return 0;
}
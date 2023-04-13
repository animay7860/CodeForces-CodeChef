#include <stdio.h>
#define MAX_PAGE 25
#define MAX_FRAME 25

int main()
{

    int pages[MAX_PAGE], frames[MAX_FRAME], distances[MAX_PAGE];

    int numberPages, numberFrames, numberPageFaults = 0;

    int i, j, temp, flag, found, lastFilledFrame, index, highestDistance;

    printf("Enter number of frames (max limit is %d): ", MAX_FRAME);
    scanf("%d", &numberFrames);
    printf("You provided number of frames: %d\n", numberFrames);

    for (i = 0; i < numberFrames; i++)
        frames[i] = -1;
    lastFilledFrame = -1;

    printf("Enter pages (enter -999 to exit, max number of pages limit is %d):\n", MAX_PAGE);
    numberPages = 0;
    for (i = 0; i < MAX_PAGE; i++)
    {
        scanf("%d", &temp);
        if (temp == -999 || numberPages == MAX_PAGE)
            break;
        pages[i] = temp;
        numberPages++;
    }
    printf("You provided number of pages: %d\n", numberPages);

    for (i = 0; i < numberPages; i++)
    {
        flag = 0;

        for (j = 0; j < numberFrames; j++)
        {
            if (frames[j] == pages[i])
            {
                flag = 1;
                printf("\t");
                break;
            }
        }

        if (flag == 0)
        {
            if (lastFilledFrame == numberFrames - 1)
            {

                for (j = 0; j < numberFrames; j++)
                {
                    for (temp = i + 1; temp < numberPages; temp++)
                    {
                        distances[j] = 0;

                        if (frames[j] == pages[temp])
                        {
                            distances[j] = temp - i;
                            break;
                        }
                    }
                }

                found = 0;
                for (j = 0; j < numberFrames; j++)
                {
                    if (distances[j] == 0)
                    {
                        index = j;
                        found = 1;
                        break;
                    }
                }
            }
            else
            {
                index = ++lastFilledFrame;
                found = 1;
            }

            if (found == 0)
            {
                highestDistance = distances[0];
                index = 0;
                for (j = 1; j < numberFrames; j++)
                {
                    if (highestDistance < distances[j])
                    {
                        highestDistance = distances[j];
                        index = j;
                    }
                }
            }

            frames[index] = pages[i];
            printf("FAULT\t");
            numberPageFaults++;
        }

        for (j = 0; j < numberFrames; j++)
        {
            if (frames[j] != -1)
                printf("%d\t", frames[j]);
        }
        printf("\n");
    }

    printf("Number of page faults = %d\n", numberPageFaults);

    return 0;
}
#include <stdio.h>
#define MAX_PAGE 25
#define MAX_FRAME 25 

int main()
{

    int pages[MAX_PAGE], frames[MAX_FRAME], distances[MAX_PAGE];

    int numberPages, numberFrames, numberPageFaults = 0;

    int i, j, temp, flag, found, lastFilledFrame, index, highestDistance;

    printf("Enter number of frames (max limit is %d): ", MAX_FRAME);
    scanf("%d", &numberFrames);
    printf("You provided number of frames: %d\n", numberFrames);

    for (i = 0; i < numberFrames; i++)
        frames[i] = -1;
    lastFilledFrame = -1;

    printf("Enter pages (enter -999 to exit, max number of pages limit is %d):\n", MAX_PAGE);
    numberPages = 0;
    for (i = 0; i < MAX_PAGE; i++)
    {
        scanf("%d", &temp);
        if (temp == -999 || numberPages == MAX_PAGE)
            break;
        pages[i] = temp;
        numberPages++;
    }
    printf("You provided number of pages: %d\n", numberPages);

    for (i = 0; i < numberPages; i++)
    {
        flag = 0;

        for (j = 0; j < numberFrames; j++)
        {
            if (frames[j] == pages[i])
            {
                flag = 1;
                printf("\t");
                break;
            }
        }

        if (flag == 0)
        {
            if (lastFilledFrame == numberFrames - 1)
            {

                for (j = 0; j < numberFrames; j++)
                {
                    for (temp = i + 1; temp < numberPages; temp++)
                    {
                        distances[j] = 0;

                        if (frames[j] == pages[temp])
                        {
                            distances[j] = temp - i;
                            break;
                        }
                    }
                }

                found = 0;
                for (j = 0; j < numberFrames; j++)
                {
                    if (distances[j] == 0)
                    {
                        index = j;
                        found = 1;
                        break;
                    }
                }
            }
            else
            {
                index = ++lastFilledFrame;
                found = 1;
            }

            if (found == 0)
            {
                highestDistance = distances[0];
                index = 0;
                for (j = 1; j < numberFrames; j++)
                {
                    if (highestDistance < distances[j])
                    {
                        highestDistance = distances[j];
                        index = j;
                    }
                }
            }

            frames[index] = pages[i];
            printf("FAULT\t");
            numberPageFaults++;
        }

        for (j = 0; j < numberFrames; j++)
        {
            if (frames[j] != -1)
                printf("%d\t", frames[j]);
        }
        printf("\n");
    }

    printf("Number of page faults = %d\n", numberPageFaults);

    return 0;
}
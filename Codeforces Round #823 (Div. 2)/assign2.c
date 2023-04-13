#include <stdio.h>
void main()
{
    int at[20], p[20], bt[20], ct[20], tat[20], wt[20], tem[20], y, n, i, j, temp, temp1, temp2;
    float Average_tat = 0, Avergae_wt = 0, Average_ct = 0;
    printf("Enter the number of process:");

    scanf("%d", &n);
    y = n;
    printf("Enter the names of processes:");

    for (i = 0; i < n; i++)

        scanf("%d", &p[i]);

    printf("Enter the Arrival Times:");

    for (i = 0; i < n; i++)

        scanf("%d", &at[i]);

    printf("Enter the Burst Times:");

    for (i = 0; i < n; i++)
    {

        scanf("%d", &bt[i]);
        tem[i] = bt[i];
    }
    // This segment of code is of FCFS Scheduling Algorithm
    printf("----------------FCFS SCHEDULING ALGORITHM----------------");
    ct[0] = bt[0];
    // printf("%d \n",ct[0]);
    for (i = 1; i < n; i++)
    {
        ct[i] = ct[i - 1] + bt[i];
    }
    for (i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }
    printf("\nProcess\t\tat\t\tbt\t\tct\t\ttat\twt");
    for (i = 0; i < n; i++)
    {
        printf("\n p[%d]\t\t%d\t\t%d\t\t%d\t\t%d\t%d", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);
        Average_ct = Average_ct + ct[i];
        Avergae_wt = Avergae_wt + wt[i];
        Average_tat = Average_tat + tat[i];
    }
    Average_ct = Average_ct / n;
    Avergae_wt = Avergae_wt / n;
    Average_tat = Average_tat / n;
    printf("\nThe average completion time is %f\n", Average_ct);
    printf("The average waiting time is %f\n", Avergae_wt);
    printf("The avgerage turn around time is %f\n", Average_tat);
    printf("\n");
    // This Segment of code is of SJF Scheduling Algorithm

    printf("----------------SJF Scheduling Algorithm----------------");
    for (i = 0; i < n; i++)

    {

        for (j = i; j < n; j++)

        {

            if (bt[i] >= bt[j])

            {

                temp = bt[i];

                bt[i] = bt[j];

                bt[j] = temp;

                temp1 = p[i];

                p[i] = p[j];

                p[j] = temp1;

                temp2 = at[i];

                at[i] = at[j];

                at[j] = temp2;
            }
        }
    }

    ct[0] = at[0] + bt[0];

    for (i = 1; i < n; i++)
    {

        ct[i] = ct[i - 1] + bt[i];
    }
    printf("\n");
    printf("The completion time for process are:");

    for (i = 0; i < n; i++)
    {

        printf(" %d", ct[i]);
    }

    printf("\nThe TAT time for process are:");

    for (i = 0; i < n; i++)
    {

        tat[i] = ct[i] - at[i];

        printf(" %d", tat[i]);
    }

    printf("\nThe Waiting time for process are:");

    for (i = 0; i < n; i++)
    {

        wt[i] = tat[i] - bt[i];

        printf(" %d", wt[i]);
    }

    float atat = 0, awt = 0;

    printf("\nThe Average TAT time for process is:");

    for (i = 0; i < n; i++)
    {

        atat = atat + tat[i];
    }

    printf("%f", atat / n);

    printf("\nThe Average Waiting time for process is:");

    for (i = 0; i < n; i++)
    {

        awt = awt + wt[i];
    }

    printf("%f\n", awt / n);

    printf("\t\tProces\tAT\tBT\tCT\tTAT\tWT");

    for (i = 0; i < n; i++)
    {

        printf("\n\t\t%d\t%d\t%d\t%d\t%d\t%d", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\n");

    // This segment of code is of Round Robin Scheduling Algorithm
    printf("----------------ROUND ROBIN SCHEDULING ALGORIHTM----------------");
    printf("\n");
    float quant;
    float count = 0, avg_wt = 0, avg_tat = 0;
    int sum;
    float wt1 = 0;
    float tat1 = 0;
    float ei = bt[0];
    for (i = 0; i < y; i++)
    {
        if (ei > bt[i])
        {
            ei = bt[i];
        }
    }
    ei = (float)ei / (float)2;
    if (ei < 5)
    {
        quant = ei;
    }
    else
    {
        quant = 5;
    }
    printf("The Time Slice for the process: \t%f", quant);

    printf("\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time ");
    for (sum = 0, i = 0; y != 0;)
    {
        if (tem[i] <= quant && tem[i] > 0)
        {
            sum = sum + tem[i];
            tem[i] = 0;
            count = 1;
        }
        else if (tem[i] > 0)
        {
            tem[i] = tem[i] - quant;
            sum = sum + quant;
        }
        if (tem[i] == 0 && count == 1)
        {
            y--; // decrement the process no.
            printf("\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d", i + 1, bt[i], sum - at[i], sum - at[i] - bt[i]);
            wt1 = wt1 + sum - at[i] - bt[i];
            tat1 = tat1 + sum - at[i];
            count = 0;
        }
        if (i == n - 1)
        {
            i = 0;
        }
        else if (at[i + 1] <= sum)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    avg_wt = wt1 * 1.0 / n;
    avg_tat = tat1 * 1.0 / n;
    printf("\n Average Turn Around Time: \t%f", avg_wt);
    printf("\n Average Waiting Time: \t%f", avg_tat);
}
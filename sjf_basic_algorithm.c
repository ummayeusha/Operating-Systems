#include <stdio.h>

void bubble_sort(int n, int pID[], int bt[]);
void waiting_time(int n, int bt[], int wt[]);
void turnaround_time(int n, int bt[], int wt[], int tat[]);
void avg(int n, int pID[], int bt[], int wt[], int tat[]);

int main (){
    printf("Number of processes: ");
    int n;
    scanf("%d", &n);

    int pID[n], bt[n], wt[n], tat[n];
    printf("Process id's and it's respective burst time: ");
    for (int i=0; i<n; i++){
        scanf("%d %d", &pID[i], &bt[i]);
    }

    bubble_sort(n, pID, bt);
    waiting_time(n, bt, wt);
    turnaround_time(n, bt, wt, tat);
    avg(n, pID, bt, wt, tat);

    return 0;
}

void bubble_sort(int n, int pID[], int bt[]) {
    int temp;
    for (int i=0; i<n-1; i++) {
        for (int j=0; j < n-i-1; j++) {
            if (bt[j] > bt[j+1]) {

                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;

                temp = pID[j];
                pID[j] = pID[j+1];
                pID[j+1] = temp;
            }
        }
    }

    printf("\npID sorted by bt: \n");
    for (int i=0; i<n; i++) {
        printf("pID: %d, BT: %d\n", pID[i], bt[i]);
    }
}

void waiting_time(int n, int bt[], int wt[]){
    wt[0]= 0;
    for (int i=1; i<n; i++){
        wt[i]= wt[i-1]+bt[i-1];
    }
}

void turnaround_time(int n, int bt[], int wt[], int tat[]){
    for (int i=0; i<n; i++){
        tat[i]= wt[i]+bt[i];
    }
}

void avg(int n, int pID[], int bt[], int wt[], int tat[]){
    int swt= 0, s_tat= 0;
    for (int i=0; i<n; i++){
        printf("\nFor pID %d:\n", pID[i]);
        printf("WT: %d\n", wt[i]);
        printf("TAT: %d\n", tat[i]);
        swt+= wt[i];
        s_tat+= tat[i];
    }

    int awt= swt/n;
    int a_tat= s_tat/n;

    printf("\nAVG_wt: %d", awt);
    printf("\nAVG_atat: %d", a_tat);
}
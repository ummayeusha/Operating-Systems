#include <stdio.h>

void waiting_time(int n, int pID[], int bt[], int wt[]);
void turnaround_time(int n, int pID[], int bt[], int wt[], int tat[]);
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

    waiting_time(n, pID, bt, wt);
    turnaround_time(n, pID, bt, wt, tat);
    avg(n, pID, bt, wt, tat);

    return 0;
}

void waiting_time(int n, int pID[], int bt[], int wt[]){
    wt[0]= 0;
    for (int i=1; i<n; i++){
        wt[i]= wt[i-1]+bt[i-1];
    }
}

void turnaround_time(int n, int pID[], int bt[], int wt[], int tat[]){
    for (int i=0; i<n; i++){
        tat[i]= wt[i]+bt[i];
    }
}

void avg(int n, int pID[], int bt[], int wt[], int tat[]){
    int swt= 0, s_tat= 0;
    for (int i=0; i<n; i++){
        swt+= wt[i];
        s_tat+= tat[i];
        printf("\nFor pID %d:\n", pID[i]);
        printf("WT: %d\n", wt[i]);
        printf("TAT: %d\n", tat[i]);
    }
    
    int awt= swt/n;
    int a_tat= s_tat/n;

    printf("\nAVG_wt: %d", awt);
    printf("\nAVG_atat: %d", a_tat);
}
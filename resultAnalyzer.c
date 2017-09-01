#include<stdio.h>
void main()
{
    int N;
    int average[50];
    int marks[100];
    int i = 0;
    int temp;
    int marksSum = 0;
    
    scanf("%d",&N);
    while( i<N && scanf("%d", &average[i++]) == 1) 
        /*empty*/;

    for( i = 0; i < N; i++ )
    {
        temp = ( average[i] * (i+1) ) - marksSum;
        marksSum = marksSum + temp;
        marks[i] = temp;
    } 

    for( i = 0; i < N; i++ )
    {
        printf("%d ",marks[i]);
    }
}



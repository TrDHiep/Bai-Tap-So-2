#include <stdio.h>
#include <vector>
#include <cstdlib> 
#include <ctime>

int i=1;
void Input(int a[], int n){
		printf ("Enter array legth:");
		scanf ( "%d",&n );
		for(i=1;i<=n;i++){
			printf("\nEnter a[%d]:",i);
			scanf("%d",&a[i]);
		}
}
void Output(int a[], int n){
	for (i=1;i<=n;i++){
			printf ("\na[%d]=%d\n",i,a[i]);
		}
}
int findmax(int a[], int n) {
	int i, max;
    max = a[1];
    for (int i = 2; i <= n; i++) {
        if (a[i] > max) {
            max = a[i];
            }
    }
    return max;
}
void AboveAverage(int a[], int n){
	
}
void Insert(int a[], int n);
void Del(int a[], int n);
void Sort(int a[], int n);
int main(){
	int a[100];
	int n;
	int esc=0;
    Input(a, n);
    while (!esc){
    	int choice;
    	printf("\n(0) Print out the list\n");
    	printf("\n(1) Find maximum marks and print to the screen\n");
    	printf("\n(7) ESC");
    	printf("\nEnter your choice(0-7):");
    	scanf("%d",&choice);
    	if (0<=choice<=7){
    		switch(choice){
    			case 0:{
    				Output(a, n);
					break;
				}
				case 1:{
					printf("\nMaximum marks is %d\n", findmax(a,n));
					break;
				}
				case 7:{
					printf ("\nGoodbye\n");
					esc=1;
					break;
				}
			}
		}
		}
		return 0;
	}


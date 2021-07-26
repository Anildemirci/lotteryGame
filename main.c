#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void siralama(int array[],int size)
	{
		int i,j,temp;
		
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
			temp=array[j];
			if(temp>array[j+1])
			{	
				array[j]=array[j+1];
				array[j+1]=temp;
			}
			else if(temp==array[j+1])
			{
				array[j+1]=1+rand()%49;
			}
			}
		}
	}

void karsilastirma(int array[],int size)
{
	int i,j,count=0;
	int win[6]={5,24,25,26,32,49}; //karsilastirmak istedigin 6 numarayi gir.
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(win[i]==array[j])
			{
				count++;
			}
		}
	}
	printf("%d adet bildiniz.",count);
}

int main() {
	
	int a,kazanan[6];
	printf("Kazanan 6 farkli numarayi girin[1-49].\n");
	for(a=0;a<6;a++)
	{
		scanf("%d",&kazanan[a]);
	}

	
	int number,numbers[6],i,x,j;
	srand(time(NULL));
	printf("Kac kolon: ");
	scanf("%d",&x);
	for(j=0;j<x;j++)
	{
	for(i=0;i<6;i++)
	{	
		number=1+rand()%49;
		numbers[i]=number;	
	}
	siralama(numbers,6);
	for(i=0;i<6;i++)
	{
	printf("%d\t ",numbers[i]);
	}
	int b,c,count=0;
	for(b=0;b<6;b++)
	{
		for(c=0;c<6;c++)
		{
			if(kazanan[b]==numbers[c])
			{
				count++;
			}
		}
	}
	printf("%d adet bildiniz.",count);
	printf("\n");
	}
	
	scanf("%t");
	
	
	return 0;
	
	
}

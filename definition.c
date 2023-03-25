  #include<stdio.h>
#include<string.h>
#include"project.h"

void storebooks(book* b, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter Book %d Details : \n",i+1);
		printf("Enter the name of the book : ");
		scanf("%s",&b[i].name);
		printf("Enter the Book ID : ");
		scanf("%d",&b[i].id);
		printf("Enter the Book Author : ");
		scanf("%s",&b[i].author);
		printf("Enter the Book Price : ");
		scanf("%d",&b[i].price);
		printf("\n");
	} 
}

void displaybooks(book* b, int n){
	int i;
	for(i=0;i<n;i++){
		
		printf("Book %d Details  : \n",i+1);
		printf("Enter the name of the book : %s\n",b[i].name);
		printf("Enter the Book ID : %d\n",b[i].id);
		printf("Enter the Book Author : %s\n",b[i].author);
		printf("Enter the Book Price : %d\n",b[i].price);
		printf("\n");
	} 	
}

void searchbyname(book* b, int n){
		int j;
		char searchbook[20];
		printf("Enter the Book Name to Search : ");
		scanf("%s",&searchbook);
			
		for (j=0;j<n;j++){
				if (strcmp(b[j].name,searchbook)==0){
					printf("Book %d Details are :\n Name : %s\n Book ID : %d\n Author : %s\n Price : %d",j+1,b[j].name,b[j].id,b[j].author,b[j].price);
				}
		}
}

void searchbybookid(book* b, int n){
		int j;
		int searchid;
		printf("Enter the BookID to search : ");
			scanf("%d",&searchid);
			for (j=0;j<n;j++){
				if (b[j].id==searchid){
					printf("Book %d Details are :\n Name : %s\n Book ID : %d\n Author : %s\n Price : %d",j+1,b[j].name,b[j].id,b[j].author,b[j].price);
				}
			}
}

void searchbyauthor(book* b, int n){
		int j;
		char searchauthor[20];
		printf("Enter the Book Author to Search : ");
			scanf("%s",&searchauthor);
			for (j=0;j<n;j++){
				if (strcmp(b[j].author,searchauthor)==0){
					printf("Book %d Details are :\n Name : %s\n Book ID : %d\n Author : %s\n Price : %d",j+1,b[j].name,b[j].id,b[j].author,b[j].price);
				}
		}
}

void maxpricebook(book* b, int n){
		int u,j,max;
		max = b[0].price;
			for (j=0;j<n;j++){
				if (b[j].price>max){
					max = b[j].price;	
					u = j;	
					}
				}
		printf("Maximum Price of book is : %d\n",max);
		printf("Book %d Details are :\n Name : %s\n Book ID : %d\n Author : %s\n Price : %d",u+1,b[u].name,b[u].id,b[u].author,b[u].price);
}

void minpricebook(book* b, int n){
	int j,min,u;
	min = b[0].price;
	for (j=0;j<n;j++){
		if (b[j].price<min){
			min = b[j].price;
			u = j;
		}
	}
	printf("Minimum Price of book is : %d\n",min);
	printf("Book %d Details are :\n Name : %s\n Book ID : %d\n Author : %s\n Price : %d",u+1,b[u].name,b[u].id,b[u].author,b[u].price);
}

// Was trying implementing the Sort by Name.
//void sortbyname(book *b,int n){
//	int j,l;
//	book b1;
//	for (j=0;j<n;j++){
//		for (l=j+1;j<n;l++){
//			if (strcmp(b[j].name,b[l].name)>0){
//				strcpy(b1.name,b[j].name);
//				strcpy(b[j].name,b[l].name);
//				strcpy(b[l].name,b1.name);
//			}
//		}
//	}
//	printf("Sorted Names are : ");
//	for (j=0;j<n;j++){
//		printf("Details of %d book : ",j+1);
//		printf("Name : %s\nID : %d\nAuthor : %s\nPrice : %d\n ",b[j].name,b[j].id,b[j].author,b[j].price);
//		   }
//}

void sortbyprice(book* b,int n){
	int j,sort,l;
	for(j=0;j<n;j++){
		sort = 0;
		for(l=j+1;l<n;l++){
			if(b[j].price>b[l].price){
					sort = b[j].price;
					b[j].price = b[l].price;
					b[l].price = sort;
					}
				}
			}
			
		printf("Sorted Price : ");
		for (j=0;j<n;j++){
				printf("Details of %d book : ",j+1);
				printf("Name : %s\nID : %d\nAuthor : %s\nPrice : %d\n ",b[j].name,b[j].id,b[j].author,b[j].price);
		   }
}

void sortbyid(book* b,int n){
	int j,sort,l;
	for(j=0;j<n;j++){
		sort = 0;
		for(l=j+1;l<n;l++){
			if(b[j].id>b[l].id){
					sort = b[j].id;
					b[j].id = b[l].id;
					b[l].id = sort;
					}
				}
			}
			
		printf("Sorted ID : ");
		for (j=0;j<n;j++){
				printf("Details of %d book : ",j+1);
				printf("Name : %s\nID : %d\nAuthor : %s\nPrice : %d\n ",b[j].name,b[j].id,b[j].author,b[j].price);
		   }
}

void updatebook(book* b, int n){
	int j,id;
	book b2;
	printf("Enter the Book ID to update : ");
	scanf("%d",&id);
	for (j=0;j<n;j++){
		if ((b[j].id==id)){
			printf("Enter the Book Name to Update : ");
			scanf("%s",&b2.name);
			printf("Enter the Book Price to Update : ");
			scanf("%d",&b2.price);
			printf("Enter the Book Author to Update : ");
			scanf("%s",&b2.author);
			strcpy(b[j].name,b2.name);
			b[j].price = b2.price;
			strcpy(b[j].author,b2.author);
			break;
		}
	}
	printf("Details of Updated Books are :\n ");
	for (j=0;j<n;j++){
				printf("Details of %d book :\n ",j+1);
				printf("Name : %s\nID : %d\nAuthor : %s\nPrice : %d\n ",b[j].name,b[j].id,b[j].author,b[j].price);
		   }	
}

void insertbook(book* b, int n){
	printf("Enter the Book %d Name : ",n+1);
	scanf("%s",&b[n].name);
	printf("Enter the Book %d ID :",n+1);
	scanf("%d",&b[n].id);
	printf("Enter the Author Name : ");
	scanf("%s",&b[n].author);
	printf("Enter the Price : ");
	scanf("%d",&b[n].price);
	
}

void deletebook(book* b, int n){
	
	book b3;
	printf("Enter the Book ID to Delete : ");
	scanf("%d",&b3.id);
	int i,j,c=0;
	
	for(i=0;i<n;i++)
	{
		if (b3.id==b[i].id)
		{
			for(j=i;j<n-1;j++)
			{
				b[j] = b[j+1];	
			}
			c++;
		}
	}
	
	if (c==0){
		printf(" \n Wrong Book Name Entered! \n ");
	}	
}

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
		printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
		printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[i].name,b[i].id,b[i].author,b[i].price);
		printf("\n");
	} 	
}

void searchbyname(book* b, int n){
	
		int j;
		char searchbook[20];
		printf(" Enter the Book Name to Search : ");
		scanf("%s",&searchbook);
			
		int flg=0;
		
		for (j=0;j<n;j++){
				if (strcmp(b[j].name,searchbook)==0){
					flg=1;
					printf("\n Book %d Details  : \n",j+1);
					printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
					printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[j].name,b[j].id,b[j].author,b[j].price);
					printf("\n");
				}
		}
		if (flg==0){
			printf(" Wrong Name Entered! ");
		}
		
}

void searchbybookid(book* b, int n){
	
		int j;
		int searchid;
		int flg=0;
		
		printf(" Enter the BookID to search : ");
			scanf("%d",&searchid);
			for (j=0;j<n;j++){
				if (b[j].id==searchid){
					flg=1;
					printf("\n Book %d Details  : \n",j+1);
					printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
					printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[j].name,b[j].id,b[j].author,b[j].price);
					printf("\n");
				}
			}
		if (flg==0){
			printf(" Wrong ID Entered! ");
		}
}

void searchbyauthor(book* b, int n){
	
		int j;
		int flg=0;
		char searchauthor[20];
		
		printf("Enter the Book Author to Search : ");
		scanf("%s",&searchauthor);
		
		for (j=0;j<n;j++){
			if (strcmp(b[j].author,searchauthor)==0){
				flg=1;
				printf("\n Book %d Details  : \n",j+1);
				printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
				printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[j].name,b[j].id,b[j].author,b[j].price);
				printf("\n");
			}
		}
		if (flg==0){
			printf(" Wrong Author Name Entered! ");
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
//		printf("Book %d Details are :\n Name : %s\n Book ID : %d\n Author : %s\n Price : %d",u+1,b[u].name,b[u].id,b[u].author,b[u].price);
		printf("\n Book %d Details  : \n",u+1);
		printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
		printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[u].name,b[u].id,b[u].author,b[u].price);
		printf("\n");
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
	printf("\n Book %d Details  : \n",u+1);
	printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
	printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[u].name,b[u].id,b[u].author,b[u].price);
	printf("\n");
}

void sortbyprice(book* b,int n){
	int j,l;
	book b4;
	for(j=0;j<n;j++){
		for(l=j+1;l<n;l++){
			if(b[j].price>b[l].price){
					b4 = b[j];
					b[j] = b[l];
					b[l] = b4;
					}
				}
			}
			
		printf("Sorted Price : ");
		for (j=0;j<n;j++){
				printf("\n Book %d Details  : \n",j+1);
				printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
				printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[j].name,b[j].id,b[j].author,b[j].price);
				printf("\n");
		   }
}

void sortbyid(book* b,int n){
	int j,l;
	book b5;
	for(j=0;j<n;j++){
		for(l=j+1;l<n;l++){
			if(b[j].id>b[l].id){
					b5 = b[j];
					b[j]= b[l];
					b[l] = b5;
					}
				}
			}
			
		printf("Sorted ID : ");
		for (j=0;j<n;j++){
				printf("\n Book %d Details  : \n",j+1);
				printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
				printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[j].name,b[j].id,b[j].author,b[j].price);
				printf("\n");
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
				printf("\n Book %d Details  : \n",j+1);
				printf("\n\t\t\t Name \t\t ID \t\t Author \t Price \n");
				printf("\n\t\t\t %s \t\t %d \t\t %s \t\t %d \n",b[j].name,b[j].id,b[j].author,b[j].price);
				printf("\n");
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
	
	printf("Success! Book Updated in System!");
	
}

void deletebook(book* b, int n){
	printf("%d",n);
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
	else {
		printf("Success! Book is deleted from System!");
	}
}

int logininfo(char* user, int pass){
	if(strcmp(user,"Dnyaneshwar")==0 && (pass = 26112001)){
		return 0;
	}
	else {
		return 1;
	}
}
